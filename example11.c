//getchar and putchar functions
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char grade;
    printf("%s", "please enter the grade: ");
    scanf("%c", &grade);
    printf("grade is %c\n", grade);

    

    // int grade;
    printf("%s", "please enter the grade: ");
    grade = getchar();
    putchar(grade);
}