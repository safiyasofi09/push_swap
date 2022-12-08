#include <stdio.h>


int	check_duplications(int *s, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < size)
	{
		i = j + 1;
		while (i < size)
		{
			if (s[j] == s[i])
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}


int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

static int	skip_spaces(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

static int	signe(char *p, int *s)
{
	if (*p == '+' && ft_isdigit(*(p + 1)))
		return (1);
	if (*p == '-' && ft_isdigit(*(p + 1)))
	{
		*s = -1;
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	r = 0;
	s = 1;
	while (((char *)str)[i])
	{
		while (skip_spaces(((char *)str)[i]))
			i++;
		if (signe((char *)str + i, &s))
			i++;
		while (ft_isdigit(((char *)str)[i]))
			r = r * 10 + (((char *)str)[i++] - 48);
		break ;
	}
	return (r * s);
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

int main(int ac, char *av[])
{
    int a_size;
	int b_size;
	int a[ac];
	int b[ac];
	int i;
	
	i = 0;
	a_size = ac - 1;
	b_size = 0;
	while (i < ac - 1)
	{
		if (check_letters(av[a_size]) == 0)
			a[i] = ft_atoi(av[a_size]);
		else
		{
			printf("Error\n");
			return (1);
		}
		a_size--;
		i++;
	}
	i = 0;
    while (i < ac - 1)
        printf("%d\n", a[i++]);
	// if (check_duplications(a, a_size) == 1)
	// {
	// 	printf("duplication\n");
	// 	return (1);
	// }
    return 0;
}

// int main(int ac, char *av[])
// {
//     while (ac > 1)
//     {
//         printf("%s\n", av[ac - 1]);
//         ac--;
//     }
//     return (0);
// }