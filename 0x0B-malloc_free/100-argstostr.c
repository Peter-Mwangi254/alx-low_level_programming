#include "main.h"
#include <stdlib.h>

/**
* argstostr - a function that concatenates all the arguments of your program
* @ac: the number of arguments to the program
* @av: the arguments to the program
* Return: returns a pointer to the concatenated string
*/
char *argstostr(int ac, char **av)
{
	int x, y, z;
	char *str;
	int c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Counts the length of every character in the argument */
	for (x = 0; x < ac; x++)
	{
		for (y = 0; 1 ; y++)
		{
			c++;
			if (av[x][y] == '\0')
				break;
		}
	}
	c += 1;
	str = (char *) malloc(c);
	if (str == NULL)
		return (NULL);

	z = 0;
	/* Concatenates every argument to the string str */
	for (x = 0; x < ac; x++)
	{
		for (y = 0; 1 ; y++)
		{
			str[z] = av[x][y];
			z++;

			if (av[x][y] == '\0')
			{
				str[z - 1] = '\n';
				break;
			}
		}
	}
	str[z] = '\0';

	return (str);
}
