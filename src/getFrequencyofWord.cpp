/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word)
{
	int c, i = 0, j = 0, wordlen = 0, count1 = 0, count = 0;
	while (word[wordlen] != '\0')
	{
		wordlen++;
	}
	while (str[i + wordlen - 1] != '\0')
	{
		count1 = 0;
		c = i;
		while (word[j] != '\0')
		{
			if (str[c] == word[j])
			{
				count1++;
			}
			c++;
			j++;
		}

		if (count1 == wordlen)
		{
			count++;
		}
		count1 = 0;
		j = 0;
		i++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

