/************************************************************************************
Rowan Antonuccio
A02184507
Function title: Program 8

Take dollar amount entered and show proper payment values in terms of bills


Begin
Give example ints for dollars to be used later down in program
Int dollar amounts 20, 10, 5, 1
Print prompt to enter amount
Scan for value from keyboard
Create  group pay amount by grouping dollars and addresses
Print the computed values to screen
Return

Void previous group, int dollars 20, 10 ,5, 1
Take number entered by user and divide by 20, then take the result and point to %d for 20s
Take the pointer value for 20s, multiply by 20, then minus from dollars to equal new dollars
Repeat for 10s, 5s and then 1s do not need to be recomputed because they are alreay summed
End
************************************************************************************/


#include <stdio.h>

void_pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones);		//Give example ints for dollars to be used later down in program

int main ()
{
	int dollars, twenties, tens, fives, ones;										//Int dollar amounts 20, 10, 5, 1
	printf("Enter a dollar amount: ");												//Print prompt to enter amount
	scanf("%d", &dollars);															//Scan for value from keyboard
	
	pay_amount(dollars, &twenties, &tens, &fives, &ones);							//Create  group pay amount by grouping dollars and addresses
	
	printf("$20 bills: %d\n", twenties);											//Address for 20s
    printf("$10 bills: %d\n", tens);												//Address for 10s
    printf(" $5 bills: %d\n", fives);												//Address for 5s
    printf(" $1 bills: %d\n", ones);												//Address for 1s
	return 0;
}

void pay_amount(int dollars, int *twenties, int *tens,								//Void previous group, int dollars 20, 10 ,5, 1
                int *fives, int *ones) 
{
    *twenties = dollars / 20;														//Take number entered by user and divide by 20, then take the result and point to %d for 20s
    dollars -= *twenties * 20;														//Take the pointer value for 20s, multiply by 20, then minus from dollars to equal new dollars
    *tens = dollars / 10;															//Take number entered by user and divide by 10, then take the result and point to %d for 10s
    dollars -= *tens * 10;															//Take the pointer value for 10s, multiply by 10, then minus from dollars to equal new dollars
    *fives = dollars / 5;															//Take number entered by user and divide by 5, then take the result and point to %d for 5s
    dollars -= *fives * 5;															//Take the pointer value for 5s, multiply by 10, then minus from dollars to equal new dollars
    *ones = dollars / 1;															//Ones do not need to be recomputed because they are alreay summed
}																					//End