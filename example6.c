//break and continue statement to alter the flow of control
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  for (int i = 0; i < 10; i++) {
    printf("%d ", i);
  }
  puts("");
  //print out number 0 to 6
  for (int i = 0; i < 10; i++) {
    if (i == 7) {
        //cause an immediate exit from the statement
        //use for escape early from a loop, while, for, do..while
      break;
    }
    printf("%d ", i);
  }
  puts("");
  //do not print number 7
  for (int i = 0; i < 10; i++) {
    printf("%s ", "start of the loop");
    if (i == 7) {
        //skips the remaining statement in that control body 
        //performs the next interation of the loop
        //apply to for, while, do..while
      continue;
      printf("%s", "test");
    }
    printf("%d ", i);
    printf("%s\n", "end of the loop");
  }
}