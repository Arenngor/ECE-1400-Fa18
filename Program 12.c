/***********************************************************************
Rowan Antonuccio
ECE 1400
11/19/18
Program 12

Country Dial Codes
Begin
Create const struct with pointer country and int code, one for the country and one for the code
Create array for dialing codes containinmg countries and corresponding code
Create int i
For loop when i is less than the codes, add i to i
If the country code is equal to the dial code, return the corresponding country code
Int dial code and char country with pointer
Print prompt to enter a code
Scan for value from user
If entry corresponds with country code, print selected code
If not, print an error message
End

************************************************************************/

#include <stdio.h>
#define NUM_CODES ((int) (sizeof(country_codes) / sizeof(country_codes[0])))

struct dialing_code														//Create const struct with pointer country and int code, one for the country and one for the code
{
	char *country;
	int code;
};

const struct dialing_code country_codes[] =								//Create array for dialing codes containinmg countries and corresponding code
{ {"Argentina",            54}, {"Bangladesh",     880},
 {"Brazil",               55}, {"Burma",           95},
 {"China",                86}, {"Colombia",        57},
 {"Congo, Dem. Rep. of", 243}, {"Egypt",           20},
 {"Ethiopia",            251}, {"France",          33},
 {"Germany",              49}, {"India",           91},
 {"Indonesia",            62}, {"Iran",            98},
 {"Italy",                39}, {"Japan",           81},
 {"Mexico",               52}, {"Nigeria",        234},
 {"Pakistan",             92}, {"Philippines",     63},
 {"Poland",               48}, {"Russia",           7},
 {"South Africa",         27}, {"South Korea",     82},
 {"Spain",                34}, {"Sudan",          249},
 {"Thailand",             66}, {"Turkey",          90},
 {"Ukrain",              380}, {"United Kingdom",  44},
 {"United States",         1}, {"Vietnam",         84} };

char* country_from_code(int dial_code)
{
	int i;																//Create int i
	for (i = 0; i < NUM_CODES; i++)										//For loop when i is less than the codes, add i to i
		if (country_codes[i].code == dial_code)							//If the country code is equal to the dial code, return the corresponding country code
			return country_codes[i].country;
	return 0;
}

int main(void)
{
	int dial_code;														//Int dial code and char country with pointer
	char *country;

	printf("\nEnter an international dialing code: ");					//Print prompt to enter a code
	scanf_s("%d", &dial_code);											//Scan for value from user

	if (country = country_from_code(dial_code))							//If entry corresponds with country code, print selected code
		printf("Country: %s\n\n", country);
	else
		printf("Error, this code is not defined!\n\n");					//If not, print an error message
	getchar();
	getchar();															//Hold program open
	return 0;															//End
}