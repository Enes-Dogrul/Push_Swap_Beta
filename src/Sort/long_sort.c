#include "../../library/push_swap.h"

void sort_argv_100_long(t_stack *stack)
{
    int *temp_stack;
    int keynbr;
    int artis;
    int x;
    x = 0;
    temp_stack = malloc(sizeof(int)*stack->stack_a_size);
    stack_copy(stack,temp_stack);
    selectionSort(temp_stack,stack->stack_a_size);
    keynbr = stack->stack_a_size/11;
    artis = keynbr;
    while (x<3)
    {
        middle_sort_1(stack,temp_stack,keynbr);
        keynbr += artis;
        x++;
    }
    //selectionSort(stack->stack_a,stack->stack_a_size);
    while(stack->stack_b_size)
    {
        first_biggest(stack);
        pa(stack);
    }
}