#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - prints structure
 * @d: param
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
