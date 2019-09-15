/**************************************************************************
Rowan Antonuccio
A02184507
Function title: Program 9

Summary:
Run test to determine whether a message is a palindrom or not

Begin
Create char values for pointers p, q
Create values of char for input as inp and for message with int size
Print prompt to enter message
Set pointer value p equal to address of msg
Create loop with parameters for user entry
Create if the the loop coordinated with alphabet
Set pointer p equal to pointer q
Reinforce pointer p equal to address msg
Create while loop coordinated with when p is less than msg+sz50
Create if loop with p equals 0
Break loop
Start if statement when pointer p isnt equal to pointer q
Print "This message is not a palindrome"
Set p to count up the line of variables while q counts down
Print"This message is a palindrome'
End






****************************************************************************/
#include <stdio.h>
#include <ctype.h>

#define SZ50 50

int main(void)
{
    char *p, *q;											//Create char values for pointers p, q
    char inp, msg[SZ50] = {0};								//Create values of char for input as inp and for message with int size
    printf("\nEnter a message: ");							//Print enter message prompt

    p = &msg[0];											//Set pointer value p equal to address of msg
    while ((inp = tolower(getchar())) != '\n')				//Create loop with parameters for user entry
        if (isalpha(inp))									//Create if the the loop coordinated with alphabet
            *p++ = inp;

    q = p-1;
    p = &msg[0];											//Reinforce pointer p equal to address msg
    while (p < &msg[0] + SZ50)								//Create while loop coordinated with when p is less than msg+sz50
    {
        if (*p == 0) break;									//Create if loop with p equals 0 and break
        if (*p != *q)										//Start if statement when pointer p isnt equal to pointer q
        {
            printf("This message is not a palindrome\n\n");	//Print "This message is not a palindrome"
            return 0;
        }
        p++, q--;											//Set p to count up the line of variables while q counts down
    }
    printf("This message is a palindrome\n\n");				//Print "This message is a palindrome

    return 0;												//End
}