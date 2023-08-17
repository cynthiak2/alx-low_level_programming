#include "main.h"
/**
 * print_alphabet - prints alphabets from a to z
 * 
 * Return: nothing
 */
void print_alphabet(void)
{
	char c;

	for(c = 'a', c <= 'z',c++)
		_putchar(c);
	_putchar('\n');
}
