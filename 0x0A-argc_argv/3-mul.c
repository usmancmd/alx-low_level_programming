#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: argument count
* @argv: argument array
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc > 1 && < 3)
{
	int i;

	for (i = 0; i <= argc; i++)
	{
	int mul = 1;

	mul *= atoi(argv[i]);
	printf("%d\n", mul);
	}
}
	else
{
	printf("%s\n", "Error");
	return (1);
}
return (0);
}
