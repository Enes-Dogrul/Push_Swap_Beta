#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>

typedef struct stack
{
    int *stack_a;
    int *stack_b;
    int *temp;
    int *lis;
    int temp1;
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
void push_swap_lis(t_stack *stack,int argc);
#endif