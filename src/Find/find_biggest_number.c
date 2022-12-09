#include "../../library/push_swap.h"
int find_biggest_number(t_stack *stack)
{
    int x;
    int biggest_number;

    x = 0;
    biggest_number = stack->stack_b[0];
    while(x < stack->stack_b_size)
    {
        if (biggest_number>stack->stack_b[x])
            biggest_number = stack->stack_b[x];
        x++;
    }
    return (biggest_number);
}