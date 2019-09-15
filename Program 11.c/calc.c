/*****************************************************************************
Rowan Antonuccio
ECE 1400
Program 11

Take RPN expressions and solve them

Pseudocode
Begin
int main
create char for ch
Print prompt to Enter an RPN exprssion
While loop while true
Second while loop for char entered to be sent to evaluation
End While loops

Begin process_character
create ints for operands 1 and 2
Create cases 0-9 for possible numbers entered, puch that number out of stack
Create cases for all symbols possible and their colutions
Print "value of expression" with evaluated answer included

*****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

void process_character(char ch) {

    int operand1, operand2;											//Create ints for operand 1 and 2
    switch(ch) {

        case '0':   push(0); break;									//Create cases 0-9 for possible numbers entered, puch that number out of stack
        case '1':   push(1); break;
        case '2':   push(2); break;
        case '3':   push(3); break;
        case '4':   push(4); break;
        case '5':   push(5); break;
        case '6':   push(6); break;
        case '7':   push(7); break;
        case '8':   push(8); break;
        case '9':   push(9); break;

        case '+':   push(pop() + pop());							//Create cases for all symbols possible and their colutions
                    break;

        case '-':   operand2 = pop();
                    operand1 = pop();
                    push(operand1 - operand2);
                    break;

        case '*':   push(pop() * pop());
                    break;

        case '/':   operand2 = pop();
                    operand1 = pop();
                    push(operand1 / operand2);
                    break;
            
        case '=':   printf("Value of expression: %d\n", pop());		//Print "value of expression" with evaluated answer included
                    break;

        case ' ':   break;

        default:    exit(EXIT_FAILURE);

    }
}

int main(void)
{
    char ch;															//Create char val for ch

    while (true) {														//While loop while true

        printf("Enter an RPN expression: ");							//Print prompt to enter RPN

        while ((ch = getchar()) != EOF && ch != '\n')					//Second while loop for char entered to be send to evaluate
            process_character(ch);
        
    }
    return 0;
}