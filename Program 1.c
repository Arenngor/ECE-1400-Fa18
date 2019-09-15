/**************************************************************************
* Rowan Antonuccio
* A02184507
* Project 5 Chapter 3
* Function title: Program 1
*
* Begin
* Create integers x1 through x16
* Get keyboard numbers 1-16
* Print "Enter any number between 1 and 16 in any order: " to the screen
* Scan entries from keyboard to fill values of integers x1-x16
* Print "Sum of rows: " to the screen
* Add integers x1, x2, x3, x4, print to screen
* Add integers x5, x6, x7, x8, print to screen
* Add integers x9, x10, x11, x12, print to screen
* Add integers x13, x14, x15, x16, print to screen
* Create new line
* Print "Sum of columns: " to the screen
* Add integers x1, x5, x9, x13, print to screen
* Add integers x2, x6, x10, x14, print to screen
* Add integers x3, x7, x11, x15, print to screen
* Add integers x4, x8, x12, x16, print to screen
* Create new line
* Print "Sum of diagonals: " to the screen
* Add integers x1, x6, x11, x16, print to screen
* Add integers x4, x7, x10, x13, print to screen
* End	
* 
****************************************************************************/

#include <stdio.h>

int main(void)

{
	int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16;																	//Create integers "x1" through "x16"//

	printf("Enter any number between 1 and 16 in any order: ");																					//Prints prompt to screen asking values to be enetered//


	scanf_s("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10, &x11, &x12, &x13, &x14, &x15, &x16);			//Get inputs from keyboard to fill integers with values//

	getchar();																																	//Holds program open until input//

	printf("\n%4d%4d%4d%4d\n"																													//Prints a 4x4 square filled with the integeres previously defined//
		"%4d%4d%4d%4d\n"
		"%4d%4d%4d%4d\n"
		"%4d%4d%4d%4d\n\n",
		x1, x2, x3, x4,
		x5, x6, x7, x8,
		x9, x10, x11, x12,
		x13, x14, x15, x16);

	printf(" \n");																																//Creates new line to make program easier to view//

	printf("Sum of rows: ");																													//Prints "sum of rows: "  before displaying values//
	printf(" %2d", x1 + x2 + x3 + x4);																											//Adds integers 1, 2, 3, 4//
	printf(" %2d", x5 + x6 + x7 + x8);																											//Adds integers 5, 6, 7, 8//
	printf(" %2d", x9 + x10 + x11 + x12);																										//Adds integers 9, 10, 11, 12//
	printf(" %2d", x13 + x14 + x15 + x16);																										//Adds integers 13, 14, 15, 16//
	printf(" \n");																																//Creates new line to make program easier to view//

	printf("Sum of columns: ");																													//Prints "sum of columns: "  before displaying values//
	printf(" %2d", x1 + x5 + x9 + x13);																											//Adds integers 1, 5, 9, 13//
	printf(" %2d", x2 + x6 + x10 + x14);																										//Adds integers 2, 6, 10, 14//
	printf(" %2d", x3 + x7 + x11 + x15);																										//Adds integers 3, 7, 11, 15//
	printf(" %2d", x4 + x8 + x12 + x16);																										//Adds integers 4, 8, 12, 16//
	printf(" \n");																																//Creates new line to make program easier to view//

	printf("Sum of diagonals: ");																												//Prints "sum of diagonals: "  before displaying values//

	printf(" %2d", x1 + x6 + x11 + x16);																										//Adds integers 1, 6, 11, 16//
	printf(" %2d", x4 + x7 + x10 + x13);																										//Adds integers 4, 7, 10, 13//
	printf(" \n");																																//Creates new line to make program easier to view//
	
	getchar();																																	//Holds program open until input//
	return 0;																																	//End program//
}