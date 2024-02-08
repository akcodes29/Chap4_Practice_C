#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	TUTORING NOTES
*/

#include <stdio.h>

int main(void){
	
	float num = 4;
	char wordd[] = "Hello";

	printf("%4.2f\n", num);
	printf("%5.2f\n", num);
	printf("%-2s", wordd);

	//(start; conditional; iteration/increment);
	for(int i = 0; i < 31; i++){

		if(i == 13){
			continue;
		}

		printf("%2d ", i);
		if(i % 7 == 0){
			 printf("\n");
		}
	}

	int x = 0;
	while(x < 10){
		x++;

		printf("%d :", x);
		
		if(x == 5) continue;

		printf(" %d\n", x);

	}

	printf("\n\n");

	int y = 1500;
	do {

		printf("%d", y);
		y++;

	} while(y < 10);



	int z = 1500;
	printf("%d", z);
	z++;

	 while(y < 10){
		printf("%d", z);
		z++;
	 }


	return 0;
}