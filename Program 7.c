/********************************************************************
Rowan Antonuccio
A02184507
Function title: Program 7

Give examples of math programs for terminal to see
Define Main program
Declare int num
Print prompt to enter a value for x
Print the exponential equation
Scan for value from keyboard
Print the answer computed from other math programs
Hold program open

Define int power
Set "if" statement for when n is less than 1
Else return x after computing the power

Define int compute_poly
Define result
Set result equal to 3 multiplied by power
Add result and 2 multiplied by power
Subtract 5 multiplied by power from result
Subtract power from result
Add 7 multiplied by x minus 6 to result
Return 'result' after having done computation
End
********************************************************************/
#include <stdio.h>

int power(int x, int y);															//Give examples of math programs for terminal to see//
int compute_poly(int x);

int main(void)																		//Define Main program//
{
	int num;																		//Declare int num//
	
	printf("\nEnter a value for x ");												//Print prompt to enter a value for x//
	printf("\n3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6");									//Print the exponential equation//
	printf("\nEnter a number x: ");													//Print prompt to enter a value for x//
	scanf_s("%d", &num);															//Scan for value from keyboard//
	printf("Answer: %d\n\n", compute_poly(num));									//Print the answer computed from other math programs//
	getchar();																		//Hold program open//
	getchar();
	return 0;
}

int power(int x, int n)																//Define int power//
{
	if (n < 1)																		//Set "if" statement for when n is less than 1//
		return 1;
	else
		return x * power(x, n - 1);													//Else return x after computing the power//
}

int compute_poly(int x)																//Define int compute_poly//
{
	int result;																		//Define result//
	result = 3 * power(x, 5);														//Set result equal to 3 multiplied by power//
	result += 2 * power(x, 4);														//Add result and 2 multiplied by power//
	result -= 5 * power(x, 3);														//Subtract 5 multiplied by power from result//
	result -= power(x, 2);															//Subtract power from result//
	result += 7 * x - 6;															//Add 7 multiplied by x minus 6 to result//
	return result;																	//Return 'result' after having done computation//
}

