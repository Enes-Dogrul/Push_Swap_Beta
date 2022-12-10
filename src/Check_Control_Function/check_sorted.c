#include "../../library/push_swap.h"

int check_sorted(t_stack *stack)
{
    int x;

    x = 0;
    while (x < stack->stack_a_size - 1)
    {
        if(stack->stack_a[x]>stack->stack_a[x+1])
            return(1);
        x++;
    }
    return (0);
    
}