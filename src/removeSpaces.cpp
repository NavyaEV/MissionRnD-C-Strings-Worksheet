/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char * removeSpaces(char *str) {
	int j, i;
	if ((str == " ")||(str == nullptr))
		return '\0';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32)
		{
			j = i;
			while (str[j] != '\0')
			{
				str[j] = str[j + 1];
				j++;
			}
			i--;
		}
	}
	return str;
}