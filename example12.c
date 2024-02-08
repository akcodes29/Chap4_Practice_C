//logical operators
//&&, ||, !

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 3;
//truth table for &&
//a   b    a && b
//1   1    1
//1   0    0
//0   1    0
//0   0    0
   printf("%d\n", a && b);

//truth table for ||
//a   b    a || b
//1   1    1
//1   0    1
//0   1    1
//0   0    0
  printf("%d\n", a || b);

//truth table for !
//  a   !a    
//  1   0
//  0   1    
   printf("%d\n", !b);
   if (a == 5 && b == 7) {
    
   }

}