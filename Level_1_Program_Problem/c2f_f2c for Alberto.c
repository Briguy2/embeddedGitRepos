/* !!!!!!!!!!!
Brian Sullivan
Embedded Programming 2014
LATEST VERSION OF LEVEL 1 PROBLEM 4 (NOW UNDERSTANDING THAT THE VARIABLE 
THAT IS BEING PASSED INTO THE FUNCTION BECOMES THE VARIABLE THAT IS IN THE 
PARAMETER LIST. AND THEY DO NOT NEED TO BE OF THE SAME NAME DO OF COARSE NEED 
TO BE OF THE SAME TYPE
4-20-2014
??????? NO RETURN STATEMENT IN C2F(), HOW COME THIS WORKS ????????
  
Brian Sullivan
Embedded Programming 2014

*/
#include <stdio.h>
#include <stdlib.h>
float c2f(float Celsius);
float f2c(float Fahrenheit);

int main() {
		float Fahr, Celsius;//Celsius must be passed to c2f()
		float Cels, Fahrenheit;//Fahrenheit must be passed to f2c()
		float cTemp;//(WON'T PRINT f2c() RESULT) TRY LEAVING THIS AS AN AUTOMATIC VAR(nope)
		
		printf("Enter celsius value:\n");           //ask for input.
		scanf(" %f", &Celsius);          //enter input in var Celsius.
		Fahr = c2f(Celsius);    // assigning value fron c2f() to var Far.
		printf(" %f Celsius = %f Fahrenheit ", Celsius, Fahr);   //printing results in an understanable formatt.
		
		printf("\n\n\nEnter the Fahrenheit temp value to be converted to Celsius");
		scanf(" %f ", &Fahrenheit);//!!!!!!! I LEFT OUT THE & !!!!!!!!! (but that was not the issue causing line 32 from running
		Cels = f2c(Fahrenheit);
		//printf("%f  Fahrenheit = %f Celius", Fahrenheit ,Cels);// this line wont execute
		printf("%f Fahreneit = %f Celsius ",Fahrenheit, Cels);//LETS TRY PRINTING Cels INSTED OF cTenp.(NOPE)
		printf("\n TEST",f2c(Fahrenheit));//test to see if code executes to this point
		return(1);
}

float c2f(float Celsius){
	float fTemp = 0.0;
		fTemp = ((Celsius * 1.8) + 32);
		//printf(" The temperature in Fahrenheit is :%f", temp); we are returning temp 
		// to main() and will print there.
	
}
float f2c(float Fahrenheit){
	float cTemp = 0.0;//This could be eliminated by using a pointer to cTemp in mail().
	cTemp = ((Fahrenheit - 32)/(1.8));
	//return(cTemp);//LETS TRY COMMENTING THIS OUT (that eliminated the compiller errors, but the code will not print the result of f2c(). TRY CHANING THE NAME OF THE VAR cTemp to one that is not already used by the lase function that was called.(nope)
	printf("TEST cTemp FUNCTION");//test the see if this function works.(nope)
}