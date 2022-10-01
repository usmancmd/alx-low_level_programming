#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: argument count
* @argv: argument vector
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc < 3)
{
	printf("%s\n", "Error");
	return (1);
}
	else
{
	int mul;

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
}
return (0);
}
