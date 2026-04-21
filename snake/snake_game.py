import pygame
import random
import sys

# 初始化pygame
pygame.init()

# 游戏常量
WIDTH, HEIGHT = 600, 600
GRID_SIZE = 20
GRID_WIDTH = WIDTH // GRID_SIZE
GRID_HEIGHT = HEIGHT // GRID_SIZE
FPS = 5

# 颜色定义
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
GREEN = (0, 255, 0)
RED = (255, 0, 0)
BLUE = (0, 120, 255)
GRAY = (40, 40, 40)

# 方向
UP = (0, -1)
DOWN = (0, 1)
LEFT = (-1, 0)
RIGHT = (1, 0)

class Snake:
    def __init__(self):
        self.reset()
        
    def reset(self):
        """重置蛇的状态"""
        self.length = 3
        self.positions = [(GRID_WIDTH // 2, GRID_HEIGHT // 2)]
        self.direction = RIGHT
        self.score = 0
        self.grow_pending = 2  # 初始长度为3，所以需要再生长2次
        
    def get_head_position(self):
        """获取蛇头位置"""
        return self.positions[0]
    
    def turn(self, point):
        """改变蛇的方向，但不能直接反向"""
        if self.length > 1 and (point[0] * -1, point[1] * -1) == self.direction:
            return  # 不能直接反向
        else:
            self.direction = point
    
    def move(self):
        """移动蛇"""
        head = self.get_head_position()
        x, y = self.direction
        new_x = head[0] + x
        new_y = head[1] + y
        
        # 检查是否撞墙
        if new_x < 0 or new_x >= GRID_WIDTH or new_y < 0 or new_y >= GRID_HEIGHT:
            return False  # 撞墙，游戏结束
            
        new_position = (new_x, new_y)
        
        # 检查是否撞到自己
        if new_position in self.positions[1:]:
            return False  # 游戏结束
        
        self.positions.insert(0, new_position)
        
        # 如果不需要生长，则移除尾部
        if self.grow_pending > 0:
            self.grow_pending -= 1
        else:
            self.positions.pop()
            
        return True  # 游戏继续
    
    def grow(self):
        """蛇生长"""
        self.grow_pending += 1
        self.length += 1
        self.score += 10
    
    def draw(self, surface):
        """绘制蛇"""
        for i, p in enumerate(self.positions):
            # 蛇头用不同颜色
            color = BLUE if i == 0 else GREEN
            rect = pygame.Rect(p[0] * GRID_SIZE, p[1] * GRID_SIZE, GRID_SIZE, GRID_SIZE)
            pygame.draw.rect(surface, color, rect)
            pygame.draw.rect(surface, BLACK, rect, 1)  # 黑色边框
            
            # 为蛇头绘制眼睛
            if i == 0:
                eye_size = GRID_SIZE // 5
                # 根据方向确定眼睛位置
                if self.direction == RIGHT:
                    left_eye = (p[0] * GRID_SIZE + GRID_SIZE - eye_size - 2, p[1] * GRID_SIZE + 5)
                    right_eye = (p[0] * GRID_SIZE + GRID_SIZE - eye_size - 2, p[1] * GRID_SIZE + GRID_SIZE - 5 - eye_size)
                elif self.direction == LEFT:
                    left_eye = (p[0] * GRID_SIZE + 2, p[1] * GRID_SIZE + 5)
                    right_eye = (p[0] * GRID_SIZE + 2, p[1] * GRID_SIZE + GRID_SIZE - 5 - eye_size)
                elif self.direction == UP:
                    left_eye = (p[0] * GRID_SIZE + 5, p[1] * GRID_SIZE + 2)
                    right_eye = (p[0] * GRID_SIZE + GRID_SIZE - 5 - eye_size, p[1] * GRID_SIZE + 2)
                else:  # DOWN
                    left_eye = (p[0] * GRID_SIZE + 5, p[1] * GRID_SIZE + GRID_SIZE - eye_size - 2)
                    right_eye = (p[0] * GRID_SIZE + GRID_SIZE - 5 - eye_size, p[1] * GRID_SIZE + GRID_SIZE - eye_size - 2)
                
                pygame.draw.rect(surface, WHITE, (left_eye[0], left_eye[1], eye_size, eye_size))
                pygame.draw.rect(surface, WHITE, (right_eye[0], right_eye[1], eye_size, eye_size))

class Food:
    def __init__(self):
        self.position = (0, 0)
        self.randomize_position()
    
    def randomize_position(self):
        """随机生成食物位置"""
        self.position = (random.randint(0, GRID_WIDTH - 1), 
                         random.randint(0, GRID_HEIGHT - 1))
    
    def draw(self, surface):
        """绘制食物"""
        rect = pygame.Rect(self.position[0] * GRID_SIZE, self.position[1] * GRID_SIZE, 
                          GRID_SIZE, GRID_SIZE)
        pygame.draw.rect(surface, RED, rect)
        pygame.draw.rect(surface, WHITE, rect, 2)  # 白色边框
        
        # 在食物上绘制一个小点，使其看起来更像苹果
        dot_radius = GRID_SIZE // 6
        dot_pos = (self.position[0] * GRID_SIZE + GRID_SIZE // 2, 
                  self.position[1] * GRID_SIZE + GRID_SIZE // 4)
        pygame.draw.circle(surface, (200, 50, 50), dot_pos, dot_radius)

def draw_grid(surface):
    """绘制网格"""
    for x in range(0, WIDTH, GRID_SIZE):
        pygame.draw.line(surface, GRAY, (x, 0), (x, HEIGHT), 1)
    for y in range(0, HEIGHT, GRID_SIZE):
        pygame.draw.line(surface, GRAY, (0, y), (WIDTH, y), 1)

def draw_score(surface, score, high_score):
    """绘制分数"""
    font = pygame.font.SysFont('arial', 25)
    score_text = font.render(f'得分: {score}', True, WHITE)
    high_score_text = font.render(f'最高分: {high_score}', True, WHITE)
    surface.blit(score_text, (5, 5))
    surface.blit(high_score_text, (WIDTH - high_score_text.get_width() - 5, 5))

def draw_game_over(surface, score):
    """绘制游戏结束画面"""
    font_large = pygame.font.SysFont('arial', 50)
    font_small = pygame.font.SysFont('arial', 30)
    
    game_over_text = font_large.render('游戏结束!', True, RED)
    score_text = font_small.render(f'最终得分: {score}', True, WHITE)
    restart_text = font_small.render('按R键重新开始', True, GREEN)
    quit_text = font_small.render('按Q键退出', True, WHITE)
    
    surface.blit(game_over_text, (WIDTH // 2 - game_over_text.get_width() // 2, HEIGHT // 2 - 80))
    surface.blit(score_text, (WIDTH // 2 - score_text.get_width() // 2, HEIGHT // 2 - 20))
    surface.blit(restart_text, (WIDTH // 2 - restart_text.get_width() // 2, HEIGHT // 2 + 20))
    surface.blit(quit_text, (WIDTH // 2 - quit_text.get_width() // 2, HEIGHT // 2 + 60))

def main():
    # 初始化屏幕
    screen = pygame.display.set_mode((WIDTH, HEIGHT))
    pygame.display.set_caption('贪吃蛇小游戏')
    clock = pygame.time.Clock()
    
    # 创建蛇和食物
    snake = Snake()
    food = Food()
    
    # 游戏状态
    game_over = False
    high_score = 0
    
    # 主游戏循环
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()
            
            if event.type == pygame.KEYDOWN:
                if game_over:
                    if event.key == pygame.K_r:
                        # 重新开始游戏
                        snake.reset()
                        food.randomize_position()
                        game_over = False
                    elif event.key == pygame.K_q:
                        pygame.quit()
                        sys.exit()
                else:
                    # 控制蛇的方向
                    if event.key == pygame.K_UP:
                        snake.turn(UP)
                    elif event.key == pygame.K_DOWN:
                        snake.turn(DOWN)
                    elif event.key == pygame.K_LEFT:
                        snake.turn(LEFT)
                    elif event.key == pygame.K_RIGHT:
                        snake.turn(RIGHT)
        
        if not game_over:
            # 移动蛇
            if not snake.move():
                game_over = True
                if snake.score > high_score:
                    high_score = snake.score
            
            # 检查是否吃到食物
            if snake.get_head_position() == food.position:
                snake.grow()
                food.randomize_position()
                # 确保食物不会出现在蛇身上
                while food.position in snake.positions:
                    food.randomize_position()
        
        # 绘制
        screen.fill(BLACK)
        draw_grid(screen)
        snake.draw(screen)
        food.draw(screen)
        draw_score(screen, snake.score, high_score)
        
        if game_over:
            draw_game_over(screen, snake.score)
        
        pygame.display.update()
        clock.tick(FPS)

if __name__ == "__main__":
    # 检查pygame是否安装
    try:
        main()
    except pygame.error as e:
        print("错误: 无法初始化pygame。请确保已安装pygame。")
        print("安装命令: pip install pygame")
        print(f"详细错误: {e}")
    except ImportError:
        print("错误: 未找到pygame模块。")
        print("请使用以下命令安装: pip install pygame")
        print("或者: python3 -m pip install pygame")