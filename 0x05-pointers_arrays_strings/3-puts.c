#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * Retun: void
 */
void _puts(char *str)
{
	while (*str != '\0'; str++)
	{
		_putchar(*str);
	}
		_putchar('\n');
}
