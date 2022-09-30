#include <stdio.h>
/**
* main - entry point
* @argc: argument count
* @argv: argument array
*
* Return: 0
*/
int main(argc, argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%d\n", argv[i]);
	}
return (0);
}
