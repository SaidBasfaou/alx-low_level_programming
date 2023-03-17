#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 97;

	while (a < 123)
	{
		putchar ("%c", a);
		a = a + 1;
	}
	putchar("\n");
	return (0);
}
