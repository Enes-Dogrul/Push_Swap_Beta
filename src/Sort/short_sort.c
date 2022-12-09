#include "../../library/push_swap.h"

void short_argv_2(t_stack *stack)
{
        if(check_sorted(stack) == 1)
            sa(stack);
}

void short_argv_3(t_stack *stack)
{ 
		if (stack->stack_a[0] == stack->max)
			ra(stack);
		if (stack->stack_a[1] == stack->max)
			rra(stack);
		if (stack->stack_a[0] > stack->stack_a[1])
			sa(stack);
}

void short_argv_5_10(t_stack *stack)
{   
    while (stack->stack_a_size>3)
    {
        first_lower(stack);
        pb(stack);
    }
    if(check_sorted(stack))
        short_argv_3(stack);
    while (stack->stack_b_size>0)
        pa(stack);
}

void short_sort(t_stack *stack)
{
    if (stack->stack_a_size == 2)
        short_argv_2(stack);
    else if(stack->stack_a_size == 3)
        short_argv_3(stack);
    else if(stack->stack_a_size >= 4 && stack->stack_a_size <= 10)
        short_argv_5_10(stack);
}