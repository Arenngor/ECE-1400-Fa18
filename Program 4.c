/************************************
Rowan Antonuccio
A02184507
ECE 1400
Function title: Program 4

Begin
Declare n, i, factorial and result
Create float for "end"
set i equal to 1
Set factorial equal to 1
Print prompt to "enter integer for n"
Get value from keyboard
Set "end" equal to 1
Hold program open
loop 
when i is < or = to n, add 1 to i
factorial multiplied by i
add "end" to the float value and divide by factorial
end loop
print the current value of "end"
hold program open
End
************************************/

#include <stdio.h>

int main(void)
{
	int n, i, factorial, result;			//Declare n, i, factorial and result//
	float end = 1.0f;						//Create float for "end"//
	i = 1;									//set i equal to 1//
	factorial = 1;							//Set factorial equal to 1//



	printf("Enter an integer for n: ");		//Print prompt to "enter integer for n"//
	scanf("%d", &n);						//Get value from keyboard//
	end = 1;								//Set "end" equal to 1//
	getchar();								//Hold program open//


	for (; i <= n; i++)						//loop when i is < or = to n, add 1 to i//
		factorial *= i;						//factorial multiplied by i//
		end += (1.0f / factorial);			//add "end" to the float value and divide by factorial//

	}										//end loop//
	printf("%f", end);						//print the current value of "end"//
	getchar();								//Hold program open//
	return 0;								//End//
}


