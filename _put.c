#include "main.h"

/**
 * _puts - print syring
 * @str: string print
 * Return: void
*/

int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - print char
 * @c: the char
 * Return: 1 success
*/

int _putchar(int c)
{
	return (write(1, &c, 1));
}
