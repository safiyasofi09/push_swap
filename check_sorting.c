#include "push_swap.h"
#include <stdio.h>

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