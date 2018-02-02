/*
** EPITECH PROJECT, 2018
** FrenchNameFormatter
** File description:
** 
*/

#include <unistd.h>
#include "french.h"

void str_change(char *str)
{
	int i = 0;

	while (str[i + 1] != ' ')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		else if (str[i + 1] >= 'A' && str[i + 1] <= 'Z' && str[i] != '-')
			str[i + 1] = str[i + 1] + 32;
		else if(str[i + 1] == '-' && str[i + 2] >= 'a' && str[i + 2] <= 'z')
			str[i + 1] = str[i + 1] - 32;
		my_putchar(str[i]);
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] = str[i + 1] - 32;
		my_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argv[1] == NULL)
	{
		write(2, "Usage: frenchNameFormatter string\n", 35);
		return (84);
	}
	str_change(argv[1]);
	return (0);
}
