#include "../library/push_swap.h"

void sb(t_stack *stack)
{
    stack->temp1 = stack->stack_b[0];
    stack->stack_b[0]=stack->stack_b[1];
    stack->stack_b[1]=stack->temp1;
    printf("sb\n");
}