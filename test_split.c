#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char *av[])
{
    int i;
    int k;
    char **s;
    char *p;
    int a_size;

    i = 1;
    k = 0;
    a_size = ac - 1;
    while (i  < ac)
    {
        // s = ft_split(av[i], ' ');
        // while (s[k] != NULL)
        // {
        //     p = s[k];
        //     printf("%s\n", p);
        //     k++;
        // }
        printf("%s\n", av[i]);
        i++;
    }
}