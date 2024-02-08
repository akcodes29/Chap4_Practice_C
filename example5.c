#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//use for loop to print out pattern
//*
//**
//***
//****

int main(void) {
    int size = 0;
    printf("Enter a number: ");
    scanf("%d", &size);

  for(int row = 0; row < size; row++) {
    for(int col = 0; col <= row; col++) {
      printf("%s", "*");
    }
     puts("");
  }
 
}