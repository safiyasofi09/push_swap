#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	int i;
	int j;
	int a_size;
	int b_size;
	int a[ac];
	int b[ac];
	char **s;
	int k;
	
	a_size = ac - 1;
	b_size = 0;
	i = 0;
	j = 0;
	k = 0;
	while (i < ac - 1)
	{
		if (check_letters(av[a_size]) == 0)
		{
			s = ft_split(av[a_size], ' ');
			while (s[k] != NULL)
			{
				a[i] = ft_atoi(s[k]);
				if (check_duplications(a, a[i], i) == 1)
				{
					printf("duplication\n");
					return (1);
				}
				i++;
				k++;
			}
			a_size--;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	j = ac - 2;
	while (j >= 0)
		printf("%d\n", a[j--]);
}

// int main(int ac, char *av[])
// {
// 	int a_size;
// 	int b_size;
// 	int a[ac];
// 	int b[ac];
// 	int i;
	
// 	i = 0;
// 	a_size = ac - 1;
// 	b_size = 0;
// 	while (i < ac - 1)
// 	{
// 		if (check_letters(av[a_size]) == 0)
// 		{
// 			a[i] = ft_atoi(av[a_size]);
// 			if (check_duplications(a, a[i], i) == 1)
// 			{
// 				printf("duplication\n");
// 				return (1);
// 			}
// 		}
// 		else
// 		{
// 			printf("Error\n");
// 			return (1);
// 		}
// 		a_size--;
// 		i++;
// 	}
// 	a_size = ac -1;
// 	i = a_size - 1;
// 	// while (i >= 0)
// 	// 	printf("first\t%d\n", a[i--]);
// 	push_swap(a, b, &a_size, &b_size);
// 	// i = a_size - 1;
// 	// while (i >= 0)
// 	// 	printf("\t%d\n", a[i--]);
// 	// i = b_size - 1;
// 	// while (i >= 0)
// 	// 	printf("b = %d\n", b[i--]);
// 	return (0);
// }