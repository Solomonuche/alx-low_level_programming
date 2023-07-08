#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int res = 0;
	int i, j;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num = 0;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				num = num * 10 + (argv[i][j] - '0');
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		res += num;
	}

	printf("%d\n", res);

	return (0);
}
