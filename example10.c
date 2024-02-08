//Switch statements are used to execute integer values.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int date = 0;
    printf("%s", "please enter the date of the week: ");
    scanf("%d", &date);

    if (date == 1) {
        puts("pizza for lunch");
    }
    if (date == 2) {
        puts("pasta for lunch");
    }
    if (date == 3) {
        puts("salad for lunch");
    }

    switch (date) {
        case 1:
            puts("pizza for lunch");
            break;
        case 2:
            puts("pasta for lunch");
            break;
        case 3:
            puts("salad for lunch");
            break;    
        default:
            puts("THIS IS OPTIONAL");
    }



    char grade;
    printf("%s", "please enter the grade: ");
    scanf("%c", &grade);
    switch (grade) {
        case 'A':
            puts("you get an A");
            break;
        case 'B':
            puts("you get a B");
            break;
        case 'C':
            puts("you get a C");
            break;    
        default:
            puts("THIS IS OPTIONAL");
    }

}