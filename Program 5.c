/*************************************************
Rowan Antonuccio
ECE 1400
Function title: Square Root
Chap 7 Project 14
Program 5

Begin
Declare doubles: x, y, and avg
Set y = 1 to use as guess
Print prompt to enter a positive number
Scan value from keyboard for x and use for prompt
Start while loop
Set avg equal to the closest guess that can be computed
Start if statement and use fabs to get absolute value
End if the old y minus the new y is less than 0.00001
End loop
Print the original number entered and its square root to screen
End
**************************************************/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y, avg;														//Declare doubles: x, y, and avg//
	y = 1;																	//Set y = 1 to use as guess//
	
    printf("\nEnter a positive number: ");									//Print prompt to enter a positive number//
    scanf("%lf", &x);														//Scan value from keyboard for x and use for prompt//

    while (1)																//Start while loop//
    {
        avg = (y + (x / y)) / 2;											//Set avg equal to the closest guess that can be computed//
        if (fabs(y - avg) > (0.00001 * y)) y = avg;							//Start if statement and use fabs to get absolute value//
        else break;															//End if the old y minus the new y is less than 0.00001//
    }
    printf("The square root of %.01f is: %.8f\n\n",x, avg);					//Print the original number entered and its square root to screen//
    return 0;																//End//
}