/************************************************************************* *************************** *
Rowan Antonuccio


Function Title: Program 10 (Chapter 13, Program 1)
 
Summary: Lets the user enter words and sorts them to find the largest
and smallest alphabetically * * Inputs: none
Outputs: none

 Compile Instructions:
* ************************************************************************** *************************** * 
Pseudocode
Begin
Create character value for "word" to be an array of size 20
Create character value for "smallest_word" to be an array of size 3  
Create character value for "largest_word" to be an array of size 20 
Create integer value for "word_count"
Create integer value for "value_int"
Set "value_int" to be command line argv to be character values
instead of int * * For "word_count" equals 0, word_count is less than "value_int"
and count up * * Print to screen "Enter word: "
Scan in a string value
If string compare for "word" compared to "smallest_word"
being less than 0 
String copy
Else if string compare for "word" compared to
"largest_word" being greater than 0  String copy
 Print to screen "Smallest word: "
 Print to screen "Largest word: "

 End
* ************************************************************************** **************************/




#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define size 20 
int main (int argc, char* argv[]) 
{
	char word[size];
//Create character value for "word" to be an array with 20 sections//
	char smallest_word[3];
//Create character value for "smallest_word" to be an array of size 3//
char largest_word[size];
//Create character value for "largest_word" to be an array of size 20//
int word_count;
//Create integer value for "word_count"// 
int value_int;
//Create integer value for "value_int"//
value_int = (atoi(argv[1]));
//Set "value_int" to be command line argv to be character values instead of int//
for (word_count = 0; word_count < value_int; word_count++) 
	//For "word_count" equals 0, word_count is less than "value_int" and count up//
{
printf("Enter word: ");
//Print to screen "Enter word: "// 

scanf("%s", word);
//Scan in a string value//
if (strcmp(word, smallest_word) < 0) 
	//If string compare for "word" compared to "smallest_word" being less than 0//
strncpy(smallest_word, word, size);
//String copy// 

else if (strcmp(word, largest_word) > 0) 
	//Else if string compare for "word" compared to "largest_word" being greater than 0//
strncpy(largest_word, word, size);
//String copy// 
} 
printf("Smallest word: %s\n", smallest_word); 
//Print to screen "Smallest word: "// 
printf("Largest word: %s\n", largest_word);
//Print to screen "Largest word: "//
return 0; 
}
