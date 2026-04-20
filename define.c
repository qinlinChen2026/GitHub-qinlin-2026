#include <stdio.h>
 
// #define LENGTH 10   
// #define WIDTH  5
// #define NEWLINE '\n'
 const int LENGTH=10;
 const int WIDTH=5;
 const int NEWLINE='\n';
 
int main()
{
 
   int area;  
  
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);
 
   return 0;
}