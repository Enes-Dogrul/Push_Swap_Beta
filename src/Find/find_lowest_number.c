#include "../../library/push_swap.h"

int find_lowest_number(t_stack *stack)
{
    int x;
    int lowest_number;

    x = 0;
    lowest_number = stack->stack_a[0];
    while(x < stack->stack_a_size)
    {
        if (lowest_number>stack->stack_a[x])
            lowest_number = stack->stack_a[x];
        x++;
    }
    return (lowest_number);
}
