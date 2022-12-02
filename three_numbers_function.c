#include "push_swap.h"
#include <stdio.h>

void    three_numbers_function(int a[], int a_size)
{
    if (a[1] < a[2] && a[1] > a[0])
    {
        ra(a, a_size);
        sa(a, a_size);
    }
    else if (a[2] > a[0] && a[2] < a[1])
        rra(a, a_size);
    else if (a[0] > a[1] && a[0] < a[2])
        ra(a, a_size);
    else if (a[0] > a[2] && a[0] < a[1])
    {
        rra(a, a_size);
        sa(a, a_size);
    }
    else if (a[2] > a[1] && a[2] < a[0])
        sa(a, a_size);
}

// int main()
// {
//     int a[3] = {2, 1, 9};
//     int a_size = 3;
//     int i = a_size - 1;

//     while (i >= 0)
//     {
//         printf("%d\n", a[i]);
//         i--;
//     }
//     three_numbers_function(a, 2);
//     i = a_size - 1;
//     while (i >= 0)
//     {
//         printf("\t%d\n", a[i]);
//         i--;
//     }
// }