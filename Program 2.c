/****************************************************************
Rowan Antonuccio
A02184507
ECE 1400
Chapter 4 Project 6
Function title: Program 2

Begin
Define integers x1-x12 and sums, total
Print "Enter the first 12 digits of the EAN: " to the screen
Get values from keyboard for the 12 numbers needed in EAN
Add the 6 even number values 2, 4, 6, 8, 10, 12
Add the 6 odd number values 1, 3, 5, 7, 9, 11
Calculate total for print out and prints "Check Digit: "
Pause system to hold window open
End
****************************************************************/

#include <stdio.h>

int main(void)
{
	int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12,			//Define integers and sums as well as total//
		sum_1, sum_2, total;

	printf(" Enter the first 12 digits of the EAN: ");				//Print promt asking user to enter the EAN's 12 digits//

	scanf_s("%1d,%1d,%1d,%1d,%1d,%1d,%1d,%1d,%1d,%1d,%1d,%1d",		//Get values from the keyboard to assign to the integers//
		&x1, &x2, &x3, &x4, &x5, &x6,
		&x7, &x8, &x9, &x10, &x11, &x12);

	sum_1 = x2 + x4 + x6 + x8 + x10 + x12;							//Add x2 + x4 + x6 + x8 + x10 + x12 in order to get the value for sum_1//
	sum_2 = x1 + x3 + x5 + x7 + x9 + x11;							//Add x1 + x3 + x5 + x7 + x9 + x11 in order to get the value for sum_2//

	total = 3 * sum_1 + sum_2;										//Calculates the total of the sums and 3 in order to print//

	printf("Check digit: %d\n\n", 9 - ((total - 1) % 10));			//Prints "Check Digit: ", creates new lines and calculates the correct digit to print//
	getchar();				
	system("pause");												//Holds window open in order to be read//
	return 0;
}
