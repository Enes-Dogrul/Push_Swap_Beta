#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include "../Libft/libft.h"


typedef struct stack
{
    int *stack_a;
    int *stack_b;
    int *temp;
    int temp1;
    int max;
    int min;
    int stack_a_size;
    int stack_b_size;
}t_stack;

//Swap
void sa(t_stack *stack);
void sb(t_stack *stack);
void ss(t_stack *stack);
//Push
void pa(t_stack *stack);
void pb(t_stack *stack);
//Rotate
void ra(t_stack *stack);
void rb(t_stack *stack);
void rr(t_stack *stack);
//Reverse Rotate
void rra(t_stack *stack);
void rrb(t_stack *stack);
void rrr(t_stack *stack);
//Find Number
void find_max(t_stack *stack);
void find_min(t_stack *stack);
//Find Biggest Lower Numbers 
int find_lowest_number(t_stack *stack);
int find_biggest_number(t_stack *stack);
void buyuk_bulucu(t_stack *stack,int sayi,int index);
//first_lower && first bigger
void first_lower(t_stack *stack);
void first_biggest(t_stack *stack);
//Sorting Algorithm
int check_sorted(t_stack *stack);
void short_sort(t_stack *stack);
void sorting_100(t_stack *stack);
void print_stack(t_stack *stack);

#endif