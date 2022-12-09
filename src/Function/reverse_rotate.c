#include "../library/push_swap.h"

void rra(t_stack *stack)
{
    int x;
    x = 0;
    stack->temp = malloc(sizeof(int)*(stack->stack_a_size));
    while(x < stack->stack_a_size)
    {
        stack->temp[x]=stack->stack_a[x];
        x++;
    }
    stack->temp1 = stack->stack_a[stack->stack_a_size - 1];
    x = 0;
    while (x<stack->stack_a_size - 1)
    {
        stack->stack_a[x+1]= stack->temp[x];
        x++;
    }
    stack->stack_a[0]=stack->temp1;
    free(stack->temp);
    printf("rra\n");
}

void rrb(t_stack *stack)
{
    int x;
    x = 0;
    stack->temp = malloc(sizeof(int)*(stack->stack_b_size));
    while(x < stack->stack_b_size)
    {
        stack->temp[x]=stack->stack_b[x];
        printf("Index[ %d]: %d",x,stack->stack_b[x]);
        x++;
    }
    stack->temp1 = stack->stack_b[stack->stack_b_size - 1];
    x = 0;
    while (x<stack->stack_b_size - 1)
    {
        stack->stack_b[x+1]= stack->temp[x];
        x++;
    }
    stack->stack_b[0]=stack->temp1;
    free(stack->temp);
    printf("rrb\n");
}