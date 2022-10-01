#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
* main - entry point
* @argc: argument count
* @argv: argument vector
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc < 2)
	printf("%d\n", 0);

	int i;

	for (i = 0; i < argc; i++)
	{
		int add;

		if (i > 1 && isnan(argv[i])
		{
		printf("%s\n", "Error");
		return (1);
		}
		else
		{
			add = 0;

			add += atoi(argv[i])
		}
	}
return (0);
}
