#include "main.h"
/*
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr[] = "_putchar";
	int x;

	for(x=0;chr[x] != '\0'; x++)
	{
		_putchar(chr[x]);
	}
	_putchar('\n');

	return (0);
}
