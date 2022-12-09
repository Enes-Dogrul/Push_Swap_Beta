#include "../../library/push_swap.h"

int biggest_index_finder(t_stack *stack,int biggest_number)
{
    int x;
    int index;

    index = 0;
    x = 0;
    while(x < stack->stack_a_size)
    {
        if(stack->stack_b[x]==biggest_number)
            index = x;
        x++;
    }
    return (index);
}

void bigger_first(t_stack *stack,int index)
{
    int sayi;
    sayi = stack->stack_b[index];
    buyuk_bulucu(stack,sayi,index);
}

void first_biggest(t_stack *stack)
{
    int index;
    index = biggest_index_finder(stack,find_biggest_number(stack));
    //printf("index[%d]\n",index);
    bigger_first(stack,index);
}