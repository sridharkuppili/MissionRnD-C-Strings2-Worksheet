/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/
#include <stddef.h>


void count_vowels_and_consonants(char *str, int *consonants, int *vowels)
{


	int i = 0, len = 0, v = 0, c = 0, a;
	if (str == NULL)
	{
		*consonants = 0;
		*vowels = 0;
	}


	else
	{
		while (str[i] != NULL)
		{

			len++;
			i++;
		}

		for (i = 0; i < len; i++)
		{
			a = str[i];
			if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
			{
				v++;
			}

			else if (a>64 && a<91 || a>96 && a < 123)
			{
				c++;
			}


		}

		*vowels = v;
		*consonants = c;
	}


}
