#include "push_swap.h"
#include <stdio.h>

void    sa(int a[], int a_size)
{
	int tmp;

	if (a_size == 1 || a_size == 0)
		return ;
	tmp = a[a_size - 1];
	a[a_size - 1] = a[a_size - 2];
	a[a_size - 2] = tmp;
	printf("sa\n");
}

void    sb(int b[], int b_size)
{
	int tmp;

	if (b_size == 1 || b_size == 0)
		return ;
	tmp = b[b_size - 1];
	b[b_size - 1] = b[b_size - 2];
	b[b_size - 2] = tmp;
	printf("sb\n");
}

void ss(int a[], int b[], int a_size, int b_size)
{
	sa(a, a_size);
	sb(b, b_size);
	printf("ss\n");
}

void    pb(int *a, int *b, int *a_size, int *b_size)
{
	if (!(*a))
		return ;
	b[*b_size] = a[*a_size - 1];
	(*b_size)++;
	(*a_size)--;
	printf("pb\n");
}

void    pa(int a[], int b[], int *a_size, int *b_size)
{
	if (!b)
		return ;
	a[*a_size] = b[*b_size - 1];
	(*a_size)++;
	(*b_size)--;
	printf("pa\n");
}

void    rra(int a[], int a_size)
{
	int tmp;
	int i;

	if (!a)
		return ;
	i = 0;
	tmp = a[i];
	while (i < a_size - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = tmp;
	printf("rra\n");
}

void    rrb(int b[], int b_size)
{
	int tmp;
	int i;

	if (!b)
		return ;
	i = 0;
	tmp = b[i];
	while (i < b_size - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[i] = tmp;
	printf("rrb\n");
}

void    rrr(int a[], int b[], int a_size, int b_size)
{
	rra(a, a_size);
	rrb(b, b_size);
	printf("rrr");
}

void    ra(int a[], int a_size)
{
	int tmp;
	int i;

	if (!a)
		return ;
	i = a_size - 1;
	tmp = a[i];
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = tmp;
	printf("ra\n");
}

void    rb(int b[], int b_size)
{
	int tmp;
	int i;

	if (!b)
		return ;
	i = b_size - 1;
	tmp = b[i];
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[i] = tmp;
	printf("rb\n");
}

void    rr(int a[], int b[], int a_size, int b_size)
{
	ra(a, a_size);
	rb(b, b_size);
	printf("rr\n");
}