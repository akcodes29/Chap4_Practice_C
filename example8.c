//use for statement to calculate the compound interest investment = $1000, interest rate is %5(0.05), deposit for 10 years
//total = investment * (1 + interest rate)^year
//output:
//year    money
//1       1000.00
//2       1005.00

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
 int principle = 1000;
 double rate = 0.05;
    int year = 10;
    double total = 0;
    printf("%s%s\n", "year    ", "money");

    for(int i = 1; i <= year ; i++){
        total = principle * pow((1 + rate), i);
        printf("%-8d %.2f\n", i, total);
    }
}