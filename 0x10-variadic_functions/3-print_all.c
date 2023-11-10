#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - Prints all arguments
 * @format: String
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;
	double d;
	char c;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				d = va_arg(args, double);
				printf("%f", d);
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", s);
				if (s == NULL)
					printf("\b\b\b\b(nil)");
				break;
			default:
				continue;
		}

		if (format[i] != '\0')
			printf(", ");
	}

	printf("\n");
	va_end(args);
}
