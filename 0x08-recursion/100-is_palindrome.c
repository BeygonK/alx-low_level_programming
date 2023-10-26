#include "main.h"
#include <string.h>
/**
 * is_palindrome_checker - Recursive helper func
 * @start: pointer
 * @end: pointer
 *
 * Return: 1
 */
int is_palindrome_checker(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start == *end)
		return (is_palindrome_checker(start + 1, end - 1));
	return (0);
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 *
 * Return: 1
 */
int is_palindrome(char *s)
{
	return (is_palindrome_checker(s, s + strlen(s) - 1));
}
