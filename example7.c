//use while loop and break statement to write a program
//which get user input(int) and print the input, only stop when user enters -1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  int num = 0;
  while(1) {
    printf("%s", "please enter the number: ");
    scanf("%d", &num);

    if(num == -1) {
        break;
    }
    printf("%d\n", num);
  }
}