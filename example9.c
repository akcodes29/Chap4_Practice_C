//do....while()
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
   int num = 0;
   while (num < 5) {
    printf("%d", num);
    num++;
   }
   puts("");
   num = 0;
   do {
    printf("%d", num);
    num++;
   } while (num < 5);
}