#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - func
 * @s: param
 * Return: 0;
 */
void rev_string(char *s)
{
	int length, start, end;
	char temp;

	length = strlen(s);
	start = 0;
	end = length - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
