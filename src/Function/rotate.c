#include "../../library/push_swap.h"

void ra(t_stack *stack)
{
    int x;
    x = 0;
    stack->temp = malloc(sizeof(int)*(stack->stack_a_size));
    while(x<stack->stack_a_size)
    {
        stack->temp[x]=stack->stack_a[x];
        x++;
    }
    stack->temp1 = stack->stack_a[0];
    x = 0;
    while(x<stack->stack_a_size - 1)
    {
        stack->stack_a[x] = stack->temp[x+1];
        x++;
    }
    x--;
    stack->stack_a[(stack->stack_a_size)-1]=stack->temp1;
    free(stack->temp);
    stack->hamlesayisi += 1;
    printf("ra\n");
}

void rb(t_stack *stack)
{
    int x;
    x = 0;
    stack->temp = malloc(sizeof(int)*(stack->stack_b_size));
    while(x<stack->stack_b_size)
    {
        stack->temp[x]=stack->stack_b[x];
        x++;
    }
    stack->temp1 = stack->stack_b[0];
    x = 0;
    while(x<stack->stack_b_size-1)
    {
        stack->stack_b[x] = stack->temp[x+1];
        x++;
    }
    stack->stack_b[(stack->stack_b_size) - 1]=stack->temp1;
    free(stack->temp);
    stack->hamlesayisi += 1;
    printf("rb\n");
}