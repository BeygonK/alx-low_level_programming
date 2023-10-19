#include "main.h"
/**
 * cap_string - Captialize a sentence
 * @str: param
 * Return: 0
 */
char *cap_string(char *str)
{
	int capitalize;
	
	capitalize = 1;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
				str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
				str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{')
		{
			capitalize = 1;
		}
		else if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
	}
       	return (str);
}
