/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reversestr(char *, int, int);
void str_words_in_rev(char *input, int len){
	int i, x;
	reversestr(input, 0, len-1);
	for (i = 0,x=0; i<len-1; i++)
	{
		if (input[i] == 32)
		{
			reversestr(input, x, i - 1);
			while (input[i] == 32)
			{
				i++;
			}
			x = i;
			i--;
		}
	}
	reversestr(input, x, len - 1);
}
void reversestr(char *s, int x, int y)
{
	int i, j;
	char t;
	for (i = 0; i <= (y - x) / 2; i++)
	{
		j = i + x;
		t = s[j];
		s[j] = s[y - i];
		s[y - i] = t;
	}
}
