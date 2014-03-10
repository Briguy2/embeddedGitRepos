/* 
Brian Sullivan
Embedded Programming 2014
Book example. This code allows the user to enter a phrase w/ keyboard and echos a
print out of ecer element of the array
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	char my_array[80],;
	int x = 0;
	printf("Please enter a phrase\n	");
	gets(my_array);//Save gets() input in my_array[].
	while ( my_array[x] != NULL) { // while contence the array element x is not NuLL 
		printf("%c", my_array[x]);//print the char in element x
		x++;// increment x by 1
	}
	return 0;
	
}