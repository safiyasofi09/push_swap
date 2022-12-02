#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void fnct(int a[3])
{
    a[0] = 3;
    a[1] = 4;
    a[2] = 5;
    // return (a);
}

int main()
{
    int size;
    int a[5];
    int b[0];
    int i;

    i = 0;
    size = 3;
    // a[0] = 0;
    // a[1] = 1;
    // a[2] = 2;
    while (i < size)
    {
        b[i] = i;
        i++;
    }
    fnct(a);
    printf("%d\n", b[1]);
    return (0);
}

 while (i < size)
    {
        printf("%d\n", a[i]);
        i++;
    }
    i = 0;
    printf("\n");
    sa(a);
    while (i < size)
    {
        printf("%d\n", a[i]);
        i++;
    }