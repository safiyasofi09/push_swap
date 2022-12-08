#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	len(char *s, char c)
{
	size_t	l;
	size_t	i;

	l = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			i++;
		else
		{
			while (s[i] && s[i] != c)
				i++;
			l++;
		}
	}
	return (l);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		p = malloc(1);
		p[0] = 0;
		return (p);
	}
	if (ft_strlen(s) < len)
		p = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (s[start] && i < len)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}

char	**ft_split(char *s, char c)
{
	char	**p;
	size_t	k;
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (!s)
		return (NULL);
	p = (char **)malloc((len((char *)s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		if (l < len((char *)s, c))
			p[l++] = ft_substr(s, k, i - k);
	}
	p[l] = NULL;
	return (p);
}