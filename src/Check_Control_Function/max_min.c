#include "../../library/push_swap.h"

void find_max(t_stack *stack)
{
    int x;

    x = 0;
    stack->max = stack->stack_a[0];
    while(stack->stack_a[x + 1])
    {
        if(stack->stack_a[x]<stack->stack_a[x+1]){
            stack->max = stack->stack_a[x+1];
        }
        x++;
    }
}

void find_min(t_stack *stack)
{
    int x;

    x = 0;
    stack->min = stack->stack_a[0];
    while(stack->stack_a[x + 1])
    {
        if(stack->stack_a[x]>stack->stack_a[x+1]){
            stack->min = stack->stack_a[x];
        }
        x++;
    }
}
