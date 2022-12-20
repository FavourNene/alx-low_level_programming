#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)

{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)

		dest[i] = src[i];
	dest[i] = src[i];

	return (&dest[0]);
}
