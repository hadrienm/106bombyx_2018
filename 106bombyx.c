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

void launchi0i1(char **av)
{
	float k = 1.00;
	int n = atoi(av[1]);
	int i0 = atoi(av[2]);
	int i1 = atoi(av[3]);
	float resultat = (float)n;
	if (i1 - i0 <= 0)exit(84);
	
	for (;k <= 4.00;)
	{
		resultat = (float)n;
		for (int a = 0; a != i0 - 1; a++)
			resultat = (k * (resultat)) * ((1000 - (resultat)) / 1000);
		printf("%0.2f %0.2f\n", k, resultat);
		for (int q = 0; i0 + q != i1; q++) {
			resultat = (k * resultat) * ((1000 - (resultat)) / 1000);
			printf("%0.2f %0.2f\n", k, resultat);
		}
		k += 0.01;
	}
}

int main(int ac, char **av)
{
	if (ac != 3 && ac != 4)return 84;
	for (int i = 1; av[i] != NULL; ++i)
		for (int j = 0; av[i][j] != '\0'; ++j)
			if (av[i][j] > 57 || av[i][j] < 42)return 84;
	if (ac == 3)launchk(av);
	else launchi0i1(av);
	return 0;
}