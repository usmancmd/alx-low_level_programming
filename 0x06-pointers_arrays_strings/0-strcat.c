#include "main.h"
#include <string.h>
/**
 *_strcat - concats src to dest
 *
 *@src: array to copy from
 *@dest: array to copy to
 *
 *
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(*dest, *src);
	return (*dest);
}

