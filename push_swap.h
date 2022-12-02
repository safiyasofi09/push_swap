#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

void    sa(int a[], int a_size);
void    sb(int b[], int b_size);
void    ss(int a[], int b[], int a_size, int b_size);
void    pb(int *a, int *b, int *a_size, int *b_size);
void    pa(int a[], int b[], int *a_size, int *b_size);
void    ra(int a[], int a_size);
void    rb(int b[], int b_size);
void    rr(int a[], int b[], int a_size, int b_size);
void    rra(int a[], int a_size);
void    rrb(int b[], int b_size);
void    rrr(int a[], int b[], int a_size, int b_size);
void    push_swap(int a[], int b[], int *a_size, int *b_size);
void    three_numbers_function(int a[], int a_size);
int     check_sorting(int a[], int a_size);
int	    ft_atoi(char *str);
#endif