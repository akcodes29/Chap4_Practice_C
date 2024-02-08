//for statement
//print out number from 1 to 5

//4 elements
//the name of a control variable
//the initial value
//increment/decrement of the control variable
//loop continuation condition

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int count = 1;
    while (count < 6) {
        printf("%d\n", count);
        count++;
    }
    puts("");

  //int i = 1: init control variable to init value
  //i < 6: continuation condition
  //i++: increment of control variable after exectuing the statement
    for (int i = 1; i < 6; i++) {
        printf("%d\n", i);
    }
    puts("");

    int i = 1;
    for (; i < 6; i++) {
        printf("%d\n", i);
    }
    puts("");
    for (int i = 1; i < 6; ) {
        printf("%d\n", i);
        i++;
    }
    puts("");
    for (int i = 1; ; i++) {
        printf("%d\n", i);
        if (i ==5) {
            break;
        }
    }
    

}