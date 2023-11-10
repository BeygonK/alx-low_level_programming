#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: A lis of types
 * c: char
 * i: integer
 * f: float
 * s: char *
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
			printf("%c", va_arg(args, int));
		else if (current_format == 'i')
			printf("%d", va_arg(args, int));
		else if (current_format == 'f')
			printf("%f", va_arg(args, double));
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
