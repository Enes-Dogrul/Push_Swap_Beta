#include "../../library/push_swap.h"

void sorting_a(t_stack *stack)
{
    while (stack->stack_a_size)
    {
        first_lower(stack);
        pb(stack);
    }
}

void sorting_b(t_stack *stack)
{
    while (stack->stack_b_size)
    {
        first_biggest(stack);
        pa(stack);
    }
    
}

void sorting_100(t_stack *stack)
{

    sorting_a(stack);
    sorting_b(stack);
    printf("\n%d\n",check_sorted(stack));
}