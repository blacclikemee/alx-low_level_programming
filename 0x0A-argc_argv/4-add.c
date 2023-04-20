#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - check if char in string array is num
 * @num: string
 * Return: 0 if it's num, 1 if not
 */

int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0 ; i < l ; i++)
		if (!isdigit(num[i]))
			return (1);
	return (0);
}

/**
 * main - Function to print the sum  of positive numbers
 * @argc: Argumnet count
 * @argv: Argument vector
 *
 * Return: 1(if error) else 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1 ; i < argc ; i++)
		{
			if (isNum(argv[i]) == 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
