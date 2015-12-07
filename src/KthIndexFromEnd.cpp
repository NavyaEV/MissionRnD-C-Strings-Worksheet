/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	int len = -1, i;
	char t;
	if ((str == " ") || (K < 0)||(str==nullptr))
		return '\0';
	while (str[++len]!='\0')
	{
	}
	if (K >= len)
		return '\0';
	len--;
	return str[len-K];
}