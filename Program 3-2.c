/*********************************************
Rowan Antonuccio
Project 7 chap 5
Function: Program 3 part 1

Begin
Define small, large, x1-4
Print prompt to enter 4 numbers
Get values from keyboard
Use "if" statement to determine larger number between first 2 digits
Set equal to "large" and "small"
Use "else" statement for other arrangement of values
Use new "if" statement to compare the 3rd number with the previous "small" and "large"and determine location
Use "Else if" to determine new "large" or "small"
Use new "if" statement to compare the 4th number with the previous "small" and "large"and determine location
Use "Else if" to determine new "large" or "small"
Print the largest and smallest numbers to screen
End
*********************************************/
#include <stdio.h>

int main(void)
{
	int small, large, x1, x2, x3, x4;								//Define small, large, x1-4//



	printf("Enter four numbers: ");									//Print prompt to enter 4 numbers//
	scanf("%d%d%d%d", &x1, &x2, &x3, &x4);							//Get values from the keyboard for the program to work//

	if (x1 >= x2) {													//Use "if" statement to determine larger number between first 2 digits//
		large = x1;													//Set value for large//
		small = x2;													//Set value for small//
	}
	else {														//Use "else" statement for other arrangement of values//
		large = x2;													//Set value for large//
		small = x1;													//Set value for small//
	}

	if (x3 > large)													//Use new "if" statement to compare the 3rd number with the previous "small" and "large"and determine location//
		large = x3;													//Set new large//

	else if (x3 < small)											//Use "Else if" to determine new "large" or "small"//
		small = x3;													//et new large//

	if (x4 > large)													//Use new "if" statement to compare the 4th number with the previous "small" and "large"and determine location//
		large = x4;													//Set new large//

	else if (x4 < small)											//Use "Else if" to determine new "large" or "small"//
		small = x4;													//Set new small//

	printf("Smallest number: %d\nLargest number: %d\n", small, large);	//Print the largest and smallest integers to the screen//
	getchar();

	return 0;
}
