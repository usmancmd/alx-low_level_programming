#include "main.h"
/**
* rot13 - encodes using rot13
* @s: string to encode
*
* Return: s
*/
char *rot13(char *s)
{
	int i, j;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; rot1[j] != '\n'; j++)
		{
			if (s[i] == rot1[j])
			{
			s[i] = rot2[j];
			break;
			}
		}
	}

	return (s);
}
