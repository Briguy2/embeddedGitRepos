/* 
Brian Sullivan
Embedded Programming 2014
Program Level 2
	Problem 1
	this code should return the number of how 
	many of a selected charecter exists within a
	phrase that is entered by the user. 
	   This will be accomplished by:
	creating an array[ ] that
	"scanf" or "gets" will be used to enter the user's 
	phrase into, and then possably another function to search the array
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	char array[80], search;
	int x = 0;//while loop counter
	int count = 0;//array element counter
	printf("\nEnter a phrase\n");
	gets(array);//Trying out gets() insted of scanf().
	printf("enter the char to look for \n");
	scanf(" %c", &search);//entering the char to look for in variable "search".
	while (array[x] != NULL) {//If we are not at the end of the string execute the if().
		if(array[x] == search){//If the contents of the array element is equal to the variable shearch.
			count = x;//variable "counter" is assigned the value of x.
			printf(" %c was found on array element # %d", search, count);//printing the results in an understanable format.
		}
		x++;//while() counter.
	}

}