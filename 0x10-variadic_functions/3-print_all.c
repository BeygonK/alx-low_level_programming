#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - Prints anything based on the provided format
 * @format: A list of types of arguments passed to the function
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *          any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char current_format;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];

		if (current_format == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (current_format == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (current_format == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (current_format == 's')
		{
			str = va_arg(args, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
		}

		i++;
		if (format[i])
		{
			if (current_format == 'c' || current_format == 'i' ||
					current_format == 'f' || current_format == 's')
				printf(", ");
		}
	}

	printf("\n");

	va_end(args);
}

