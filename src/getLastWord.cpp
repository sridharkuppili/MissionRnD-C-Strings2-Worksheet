/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{


	int spacecount = 0, len = 0, i, len1, len2;
	char *newarr;
	newarr = (char*)malloc(sizeof(char)* 100);

	if (str == NULL)
		return NULL;

	while (str[len] != '\0')
	{
		len++;
	}

	while (str[len - 1] == ' ')
	{
		len--;
	}
	len1 = len - 1;
	while (str[len - 1] != ' ' && len >= 1)
	{
		len--;
	}
	len2 = len;
	for (i = 0; len2 <= len1; i++)
	{
		newarr[i] = str[len2];
		len2++;
	}
	newarr[i] = '\0';
	return newarr;

}
