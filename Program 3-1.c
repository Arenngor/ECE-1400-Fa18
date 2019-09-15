/*******************************************
Rowan Antonuccio
Project 11 chap 5
Function: Program 3 part 2

Begin
Define x, tens and ones in order to cover full potential number cases
Print prompt to enter number
Get values from keyboard
Define the boundaries of the porgram, and give warning
End if improper number
Divide appropriate number by 10 and get the remainder
Define case statements 1-9 and if statements for "teens"
Else, in case larger number
Define switch statement for "tens" and cases 1-9
Next switch, single digits to complete the larger numbers
Cases 1-9
Print the number the user entered to screen
End

********************************************/


#include <stdio.h>

int main(void)
{
	int x, tens, ones;																//Define, x, tens, ones//

	printf("Enter a 2 digit number: ");												//Print prompt to enter 2 digit number//

	scanf("%d", &x);																	//Get value for x//

	if (x < 10 || x > 99) {															//Use "if" statement to determine how large number is//
		printf("Error, please enter number value with only 2 digits.");				//Print error to user in order to properly execute the program//
		return 0;																	//End//
	}

	tens = x / 10;																	//Divide x by 10 in order to find the number value//
	ones = x % 10;																	//Get the remainder for the ones value//

	printf("You entered the number ");												//Print the Number that was entered to the screen after running through the cases//
	getchar();
	if (tens == 1) {																//Check if the first digit begins in one//
		switch (ones) {																//Use switch statement to change the ones to proper values//
		case 0: printf("ten.");													//Define case 0 for ten//
			break;
		case 1: printf("eleven.");												//Define case 1 for eleven//
			break;
		case 2: printf("twelve.");												//Define case 2 for twelve//
			break;
		case 3: printf("thirteen.");											//Define case 3 for thirteen//
			break;
		case 4: printf("fourteen.");											//Define case 4 for fourteen//
			break;
		case 5: printf("fifteen.");												//Define case 5 for fifteen//
			break;
		case 6: printf("sixteen.");												//Define case 6 for sixteen//
			break;
		case 7: printf("seventeen.");											//Define case 7 for seventeen//
			break;
		case 8: printf("eighteen.");											//Define case 8 for eighteen//
			break;
		case 9: printf("nineteen.");											//Define case  9 for nineteen//
			break;
		}
	}
	else {																		//Else in case of number not within 10-19//
		switch (tens) {																//Use switch statement to change the tens to proper values//
		case 2: printf("twenty-");												//Define case statement for twenty//
			break;
		case 3: printf("thirty-");												//Define case statement for thirty//
			break;
		case 4: printf("forty-");												//Define case statement for forty//
			break;
		case 5: printf("fifty-");												//Define case statement for fifty//
			break;
		case 6: printf("sixty-");												//Define case statement for sixty//
			break;
		case 7: printf("seventy-");												//Define case statement for seventy//
			break;
		case 8: printf("eighty-");												//Define case statement for eighty//
			break;
		case 9: printf("ninety-");												//Define case statement for ninety//
			break;
		}

		switch (ones) {																//Use switch statement to change the ones to proper values//
		case 1: printf("one.");													//Define case statement for one//
			break;
		case 2: printf("two.");													//Define case statement for two//
			break;
		case 3: printf("three.");												//Define case statement for three//
			break;
		case 4: printf("four.");												//Define case statement for four//
			break;
		case 5: printf("five.");												//Define case statement for five//
			break;
		case 6: printf("six.");													//Define case statement for six//
			break;
		case 7: printf("seven.");												//Define case statement for seven//
			break;
		case 8: printf("eight.");												//Define case statement for eight//
			break;
		case 9: printf("nine.");												//Define case statement for nine//
			break;
		}
	}
	getchar();
	return 0;
}







