#include "main.h"
/**
 * is_printable - checks if char is printable
 * @c: the char
 * Return: returns 1 if char is printable elsw returns 0
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
/*
 * append_hexa_code - appends ascci to the buffer
 * @buffer: char array
 * @i: starting index
 * @ascci_code: code ascci
 * Return: returns 3 always
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* Hexa is always two digits long */
	if (ascii_code < 0)
		ascii_code *= -1;
	buffer[i++] = '\\';
	buffer[i++] = 'x';
	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];
	return (3);
/**
 * is_digit - checks if a given char is a digit
 * @c: the char
 * Return: returns 0 if the char is a digit and 0 if otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/**
 * convert_size_number - converts num to the size of specification
 * @num: the num
 * @size:the size
 * Return: returns the casted value
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);
	return ((int)num);
}
/**
 * convert_size_unsgnd - converts to the specified number
 * @num: the number of times
 * @size: the size
 * Return: returns the casted value
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);
	return ((unsigned int)num);
}
