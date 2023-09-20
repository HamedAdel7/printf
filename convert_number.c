#include "main.h"

/**
 * print_hex - printd unsigned
 * @ap: the argument pointer
 * @params: the param
 *
 * Return: bytes printed
*/
int print_hex(va_list ap, params_t *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	str = convert(l, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	if (params->hashtag_flag && l)
	{
		*--str = 'x';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}
/**
 * print_HEX - prints unsigned hex
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
*/
int print_HEX(va_list ap, params_t *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	str = convert(l, 16, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && l)
	{
<<<<<<< HEAD
		*--str = 'X';
		*--str = '0';
=======
		*--str == 'X';
		*--str == '0';
>>>>>>> 92558415a4ce6df4e56a5dfcfd44794fe6ff3b9c
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}
/**
 * print_binary - prints unsigned binary number
 * @ap: the arg pointer
 * @params: the params struct
 *
 * Return: bytes pointed
*/
int print_binary(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, unsigned int);
	char *str = convert(n, 2, CONVERT_UNSIGNED, params);
	int c = 0;

	if (params->hashtag_flag && n)
		*--str = '0';
	params->unsign = 1;
	return (c += print_number(str, params));
}
/**
 * print_octal - prints unsigned octal numbers
 * @ap: the argument pointer
 * @params: the params
 *
 * Return: bytes printed
*/
int print_octal(va_list ap, params_t *params)
{
	unsigned long l;
	char *str;
	int c = 0;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	str = convert(l, 8, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && l)
	{
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}
