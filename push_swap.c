#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    push_swap(int a[], int b[], int *a_size, int *b_size)
{
	int i;
	int j;
	int t;

	j = 0;
	t = *a_size;
	while (j < t)
	{
		i = *a_size - 1;
		if (check_sorting(a, i))
			break;
		if (i == 2)
		{
			three_numbers_function(a, *a_size);
			break;
		}
		while (i > 0)
		{
			if (a[*a_size - 1] < a[*a_size - 2])
				sa(a, *a_size);
			ra(a, *a_size);
			i--;
		}
		pb(a, b, a_size, b_size);
		j++;
	}
	j = 0;
	while (*b_size > 0)
		pa(a, b, a_size, b_size);
}

int check_letters(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (!((s[i] >= '0' && s[i] <= '9') || s[i] == '-'))
			return (1);
		i++;
	}
	return (0);
}

int    check_sorting(int a[], int a_size)
{
    int i;

    i = a_size;
    while (i >= 0)
    {
        if (a[i] > a[i - 1])
            return (0);
        i--;
    }
    return (1);
}

int	check_duplications(int *a, int s, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		if (s == a[i])
			return (1);
		i++;
	}
	return (0);
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
