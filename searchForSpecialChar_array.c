/* 
Brian Sullivan
Embedded Programming 2014
Book example. This code 
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	char my_array[80], search;
	int x = 0;
	printf("\n\n\n enter a phrase\n");
	gets(my_array);
	printf("Enter the character to look for\n");
	scanf(" %c", &search);
	while ( my_array[x] != search) {
		x++
	}
	printf("The first occurrence of this character happened on array position %d \n", x);
	return 0
	}