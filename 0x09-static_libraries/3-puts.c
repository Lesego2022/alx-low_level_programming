#include <stdio.h>

/**
 * _puts - Prints a string to stdout followed by a new line.
 *
 * @str: pointer to the string to be printed.
 *
 * Return: None.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
