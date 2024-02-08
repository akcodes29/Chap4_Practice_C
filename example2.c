//use for loop to write a program which add all the odd number between 0 to 1000

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    for(int i = 1; i < 1000; i += 2) {
        printf("%d\n", i);
        }
        puts("");

        //solution 2
        for(int i = 1; i < 1000;) {
            printf("%d ", i);
            i += 2;
        }
        puts("");

        //solution 3
        int sum = 0;
        for (int i = 0; i < 1001; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        printf("sum is %d\n", sum);

        //solution 4
        sum = 0;
        for(int i = 1; i < 1000; i +=2) {
            sum += i;
        }
        printf("sum is %d\n", sum);
}