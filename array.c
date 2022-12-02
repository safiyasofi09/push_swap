#include <stdio.h>

void print(int a[3][3]);

int main()
{
    int a[3][3], i, j;
    printf("\nenter elements");
    i = 0;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            scanf("enter%d", &a[i][j]);
            j++;
        }
        i++;
    }
    print(a);
    return 0;
}
void print(int a[3][3])
{
    int i, j;
    i = 0;
    while (i < 3)
    {
        j = 0;
        while (j < 3)
        {
            printf("%d     ", a[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
}