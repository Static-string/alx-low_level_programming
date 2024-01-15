#include <stdio.h>

/**
 * main - program entry point
 *
 * @argc: argument count
 * @argv: argument value
 * Return: Always (0);
 */
int main(int argc, char *argv[])
{
	int c = 1;

	while(c < argc)
	{
	printf("%s\n", argv[c]);
	c++;
	}
	return (0);
}
