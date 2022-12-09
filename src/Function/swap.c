#include "../../library/push_swap.h"

void sa(t_stack *stack)
{
    stack->temp1 = stack->stack_a[0];
    stack->stack_a[0]=stack->stack_a[1];
    stack->stack_a[1]=stack->temp1;
    printf("sa\n");      
}

void sb(t_stack *stack)
{
    stack->temp1 = stack->stack_b[0];
    stack->stack_b[0]=stack->stack_b[1];
    stack->stack_b[1]=stack->temp1;
    printf("sb\n");
}