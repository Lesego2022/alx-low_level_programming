#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %za byte(s)\n", sizeof(char));
	printf("Size of an int: %za byte(s)\n", sizeof(int));
	printf("Size of a long int: %za byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %za byte(s)\n", sizeof(long long int));
	printf("Size of a float: %za byte(s)", sizeof(float));
	return (0);
}
