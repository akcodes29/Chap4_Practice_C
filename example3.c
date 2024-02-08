//use for loop to print out pattern
//*****
//*****
//*****

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int row = 0;
    int column = 0;
    int row_max = 3;
    int column_max = 5;
    //print for each row
    while (row < row_max) {
        //printf out each row
        while(column < column_max) {
            printf("%s", "*");
            column += 1;
        }
        row += 1;
        //reset the column counter after print each row
        column = 0;
        //start a new line after print each row
        puts("");
    }
    printf("==================\n");
    for (int i = 0; i < row_max; i++) {
        for (int j = 0; j < column_max; j++) {
            printf("%s", "*");
        }
            
            puts("");
        }
    }

