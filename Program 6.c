/*********************************************************************************************
Rowan Antonuccio
Function title: Program 6
ECE 1400

Begin
Set character array of a 10x10, group
Set int to row, column, i and direction
Set bool to block [4]= false
Random integer from time of compiling
Begin for statement when row=0, 0<10, add row to row
For column=0, column is less than 10, add column to column
Array column by row is equal to empty cell which is equal to '.'
Set row equal to column which is 0
Set array equal to the group value corresponding to letter 'A'
Set while statement for when array is not equal to z, the block will be false
Set random direction
Set If for when direction is equal to up, (time=0) then If
If time is not equal to 0, then print '.'
Else, print a letter and continue down program
Set If for when direction is equal to right, (time=1) then If
If time is not equal to 1, then print '.'
Else, print a letter and continue down program
Set If for when direction is equal to down, (time=2) then If
If time is not equal to 2, then print '.'
Else, print a letter and continue down program
Set If for when direction is equal to left, (time=3) then If
If time is not equal to 3, then print '.'
Else, print a letter and continue down program
Set array: row, column equal to char group +1
For when i equals 0 and is less than 4, add i to i
If I is equal to one of the blocked values, value is false
For row is equal to 0 and row is less than 10, add row to row
For when column is equal to 0 and less than 10 add column to column
Print character values for the true statements
Hold program open
End
*********************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define EMPTY_CELL '.'
#define BLOCKED (blocked[0] == true && blocked[1] == true && blocked[2] == true && blocked[3] == true)
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

int main(void)
{
	char arr[10][10], prev;																//Set character array of a 10x10, group//
	int row, column, direction, i;														//Declare int to row, column, i and direction//
	bool blocked[4] = { false };														//Set bool to block [4]= false//

	srand((unsigned)time(NULL));														//Random integer from time of compiling//

	for (row = 0; row < 10; row++)														//Begin for statement when row = 0, 0 < 10, add row to row//
		for (column = 0; column < 10; column++)											//For column=0, column is less than 10, add column to column//
			arr[column][row] = EMPTY_CELL;

	row = column = 0;																	//Set row equal to column which is 0//
	arr[row][column] = prev = 'A';														//Set array equal to the group value corresponding to letter 'A'//

	while (arr[row][column] != 'Z' && BLOCKED == false)									//Set while statement for when array is not equal to z, the block will be false//
	{
		direction = rand() % 4;															//Set random direction//

		if (direction == UP)															//Set If for when direction is equal to up, (time=0) then If//
		{
			if (row - 1 >= 0 && arr[row - 1][column] == EMPTY_CELL)						//If time is not equal to 0, then print '.'//
				row--;
			else
			{
				blocked[direction] = true;												//Else, print a letter and continue down program//
				continue;
			}
		}
		else if (direction == RIGHT)													//Set If for when direction is equal to right, (time=1) then If//
		{
			if (column + 1 <= 9 && arr[row][column + 1] == EMPTY_CELL)					//If time is not equal to 1, then print '.'//
				column++;
			else
			{
				blocked[direction] = true;												//Else, print a letter and continue down program//
				continue;
			}
		}
		else if (direction == DOWN)														//Set If for when direction is equal to down, (time=2) then If//
		{
			if (row + 1 <= 9 && arr[row + 1][column] == EMPTY_CELL)						//If time is not equal to 2, then print '.'//
				row++;
			else
			{
				blocked[direction] = true;												//Else, print a letter and continue down program//
				continue;
			}
		}
		else if (direction == LEFT)														//Set If for when direction is equal to left, (time=3) then If//
		{
			if (column - 1 >= 0 && arr[row][column - 1] == EMPTY_CELL)					//If time is not equal to 3, then print '.'//
				column--;
			else
			{
				blocked[direction] = true;												//Else, print a letter and continue down program//
				continue;
			}
		}

		arr[row][column] = prev = prev + 1;												//Set array equal to char group +1//
		for (i = 0; i < 4; i++)															//For when i equals 0 and is less than 4, add i to i//
			blocked[i] = false;															//If I is equal to one of the blocked values, value is false//
	}

	printf("\n");																		//Print New line//
	for (row = 0; row < 10; row++)														//For row is equal to 0 and less than 10 add row to row//
	{
		for (column = 0; column < 10; column++)											//For when column is equal to 0 and less than 10 add column to column//
			printf("%c ", arr[column][row]);											//Print character values for the true statements//
		printf("\n");																	//Print new line//
	}
	printf("\n");																		//Print new line//
	getchar();																			//Hold program open//
	return 0;																			//End//
}