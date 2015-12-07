/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
void reverses(char *, int, int );

void number_to_str(float number, char *str,int afterdecimal){
	int num=number,i=-1,temp,x=0;
	if (num < 0)
	{
		x = 1;
		str[++i] = '-';
		num = num*-1;
		number = number*-1;
	}
	number = number - (float)num;
	while (num>0)
	{
		temp = num % 10;
		str[++i] = temp + 48;
		num = num / 10;
	}
	reverses(str, x, i);
	str[++i] = '.';
	temp = 1;
	while (afterdecimal>0)
	{
		temp = temp * 10;
		afterdecimal--;
	}
	num = number*temp;
	x = i + 1;
	while (num>0)
	{
		temp = num % 10;
		str[++i] = temp + 48;
		num = num / 10;
	}
	reverses(str, x, i);
	str[++i] = '\0';
}
void reverses(char *s, int x, int y)
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
