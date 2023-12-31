/*
** EPITECH PROJECT, 2019
** 106
** File description:
** 106
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int launchk(char **av, int ac)
{
    for (int i = 1; i != ac; ++i) {
        for (int j = 0; av[i][j] != '\0'; ++j) {
            if (i == 1)
                if (av[i][j] > 57 || av[i][j] < 48)return 84;
            if (i == 2)
                if (av[i][j] > 57 || av[i][j] < 46)return 84;
        }
    }
	double n = atof(av[1]);
	double k = atof(av[2]);
    if (k < 1 || k > 4)return 84;
	double resultat = n;
	for (int i = 0; i != 100; ++i) {
		printf("%d ", i + 1);
		printf("%0.2f\n", resultat);
		resultat = (k * (resultat)) * ((1000 - (resultat)) / 1000);
	}
}

int launchi0i1(char **av, int ac)
{
    for (int i = 1; i != ac; ++i) {
        for (int j = 0; av[i][j] != '\0'; ++j)
            if (av[i][j] > 57 || av[i][j] < 48)return 84;
    }
	double k = 1.00;
	int n = atoi(av[1]);
	int i0 = atoi(av[2]);
	int i1 = atoi(av[3]);
	double resultat = (double)n;
	if (i1 - i0 <= 0)exit(84);
	
	for (;k <= 4.00;)
	{
		resultat = (double)n;
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
    int n = 0;
    if (ac == 1)return 84;
	if (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
		printf("USAGE\n    ./106bombyx n [k | i0 i1]\n\nDESCRPITION\n     n     number of first generation individuals\n     k     growth rate from 1 to 4\n     io    initial generation (included)\n     i1    final generation (included)\n");
		return (0);
	}
	if (ac == 3 || ac == 4);
    else return 84;
	if (ac == 3)n = launchk(av, ac);
	else n = launchi0i1(av, ac);
    if (n == 84)return 84;
	return 0;
}