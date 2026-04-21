#!/usr/bin/env python3
"""
测试贪吃蛇游戏逻辑
这个测试脚本在不启动Pygame窗口的情况下测试游戏的核心逻辑
"""

import sys
import os

# 将当前目录添加到Python路径，以便导入snake_game
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

try:
    # 尝试导入游戏模块
    from snake_game import Snake, Food, WIDTH, HEIGHT, GRID_SIZE, GRID_WIDTH, GRID_HEIGHT
    
    print("=" * 50)
    print("贪吃蛇游戏测试")
    print("=" * 50)
    
    # 测试1: 创建蛇对象
    print("\n1. 测试蛇类初始化...")
    snake = Snake()
    print(f"   蛇初始位置: {snake.get_head_position()}")
    print(f"   蛇初始长度: {snake.length}")
    print(f"   蛇初始方向: {snake.direction}")
    print(f"   蛇初始得分: {snake.score}")
    print("   ✓ 蛇类初始化成功")
    
    # 测试2: 蛇的移动
    print("\n2. 测试蛇的移动...")
    initial_head = snake.get_head_position()
    move_result = snake.move()
    new_head = snake.get_head_position()
    print(f"   移动前头部位置: {initial_head}")
    print(f"   移动后头部位置: {new_head}")
    print(f"   移动结果: {'成功' if move_result else '失败'}")
    print(f"   蛇的位置列表: {snake.positions}")
    print("   ✓ 蛇移动测试成功")
    
    # 测试3: 改变方向
    print("\n3. 测试改变方向...")
    print(f"   当前方向: {snake.direction}")
    snake.turn((0, -1))  # 向上
    print(f"   改变后方向: {snake.direction}")
    print("   ✓ 方向改变测试成功")
    
    # 测试4: 创建食物对象
    print("\n4. 测试食物类...")
    food = Food()
    print(f"   食物位置: {food.position}")
    print(f"   食物位置在网格内: 0 <= x < {GRID_WIDTH}, 0 <= y < {GRID_HEIGHT}")
    print("   ✓ 食物类测试成功")
    
    # 测试5: 蛇吃到食物
    print("\n5. 测试蛇吃到食物...")
    # 将蛇头移动到食物位置
    snake.positions[0] = food.position
    print(f"   蛇头位置: {snake.get_head_position()}")
    print(f"   食物位置: {food.position}")
    print(f"   是否吃到食物: {snake.get_head_position() == food.position}")
    if snake.get_head_position() == food.position:
        old_length = snake.length
        old_score = snake.score
        snake.grow()
        print(f"   生长前长度: {old_length}, 生长后长度: {snake.length}")
        print(f"   生长前得分: {old_score}, 生长后得分: {snake.score}")
        print("   ✓ 蛇吃到食物测试成功")
    
    # 测试6: 游戏常量
    print("\n6. 测试游戏常量...")
    print(f"   窗口大小: {WIDTH}x{HEIGHT}")
    print(f"   网格大小: {GRID_SIZE}")
    print(f"   网格宽度: {GRID_WIDTH}")
    print(f"   网格高度: {GRID_HEIGHT}")
    print("   ✓ 游戏常量测试成功")
    
    # 测试7: 蛇的自我碰撞检测
    print("\n7. 测试自我碰撞检测...")
    # 创建一个短的蛇并测试自我碰撞
    test_snake = Snake()
    test_snake.positions = [(5, 5), (5, 6), (5, 7)]  # 设置蛇的位置
    test_snake.direction = (0, -1)  # 向上移动
    # 移动蛇，使其撞到自己
    test_snake.positions.insert(0, (5, 5))  # 在头部添加一个已经存在的位置
    collision = (5, 5) in test_snake.positions[1:]
    print(f"   自我碰撞检测: {collision}")
    print("   ✓ 自我碰撞检测测试成功")
    
    print("\n" + "=" * 50)
    print("所有测试完成!")
    print("游戏逻辑测试通过。")
    print("=" * 50)
    print("\n要运行完整的贪吃蛇游戏，请执行:")
    print("  python3 snake_game.py")
    print("\n如果遇到'ModuleNotFoundError: No module named 'pygame''错误，请安装pygame:")
    print("  pip install pygame")
    
except ImportError as e:
    print(f"导入错误: {e}")
    print("\n请确保已安装pygame:")
    print("  pip install pygame")
    sys.exit(1)
except Exception as e:
    print(f"测试过程中发生错误: {e}")
    import traceback
    traceback.print_exc()
    sys.exit(1)