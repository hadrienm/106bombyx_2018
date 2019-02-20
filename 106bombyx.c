/*
** EPITECH PROJECT, 2019
** 106
** File description:
** 106
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void launchk(char **av)
{
	float n = atof(av[1]);
	float k = atof(av[2]);
	float resultat = n;
	for (int i = 0; i != 100; ++i) {
		printf("%d ", i + 1);
		printf("%0.2f\n", resultat);
		resultat = (k * (resultat)) * ((1000 - (resultat)) / 1000);
	}
}

int main(int ac, char **av)
{
	if (ac != 3 && ac != 4)return 84;
	for (int i = 1; av[i] != NULL; ++i)
		for (int j = 0; av[i][j] != '\0'; ++j)
			if (av[i][j] > 57 || av[i][j] < 42)return 84;
	if (ac == 3)launchk(av);
	//else launchi0i1(av);
	return 0;
}