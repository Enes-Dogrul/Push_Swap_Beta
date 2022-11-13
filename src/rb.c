#include "../library/push_swap.h"

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
        stack->stack_b[x] = stack->temp[x];
        x++;
    }
    stack->stack_b[(stack->stack_b_size)]=stack->temp1;
    free(stack->temp);
    printf("rb\n");
}