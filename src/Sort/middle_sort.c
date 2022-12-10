#include "../../library/push_swap.h"

void stack_copy(t_stack *stack , int *temp_stack)
{
    int x;
    x = 0;
    while (x < stack->stack_a_size)
    {
        temp_stack[x] = stack->stack_a[x];
        x++;
    }
    x = 0;
}

void middle_sort_1(t_stack *stack,int *temp_stack,int keynbr)
{
    int x;
    x = 0;
    while (x < stack->stack_a_size)
    {
        if(stack->stack_a[x] <= temp_stack[keynbr])
        {
            lowest_first(stack,x);
            pb(stack);
            x = 0;
        }
        x++;
    }
}

void short_argv_11_100(t_stack *stack)
{
    int *temp_stack;
    int keynbr;
    int artis;
    int x;
    x = 0;
    temp_stack = malloc(sizeof(int)*stack->stack_a_size);
    stack_copy(stack,temp_stack);
    selectionSort(temp_stack,stack->stack_a_size);
    keynbr = stack->stack_a_size/4;
    artis = keynbr;
    while (x<3)
    {
        middle_sort_1(stack,temp_stack,keynbr);
        keynbr += artis;
        x++;
    }
    selectionSort(stack->stack_a,stack->stack_a_size);
    while(stack->stack_b_size)
    {
        first_biggest(stack);
        pa(stack);
    }
    print_stack(stack);
}