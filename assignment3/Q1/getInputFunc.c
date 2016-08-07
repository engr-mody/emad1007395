#include<stdio.h>
#include<myHeader.h>

int getInteger(void) {
	int input;
	int returnValue = 0;
	printf("\nThis program will take an integer and\n");
	printf("compute its factorial.");
	while(!returnValue) {
		printf("\nPlease Enter an integer : ");
		returnValue = scanf("%d", &input);
		while(getchar() != '\n');
	}
	return input;
}
