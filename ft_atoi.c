#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

static int	skip_spaces(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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