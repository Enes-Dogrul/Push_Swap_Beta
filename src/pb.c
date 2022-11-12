#include "../library/push_swap.h"

void stack_temp1_b(t_stack *stack)
{
    int x;
    x = 0;
    while (x<stack->stack_b_size)
    {
        stack->temp[x]=stack->stack_b[x];
        x++;
    }
    free(stack->stack_b);
    stack->stack_b = malloc(sizeof(int)*(stack->stack_a_size+1));
}

void pa_insert1_b(t_stack *stack)
{
    int x;
    x = 0;
    while (x < stack->stack_b_size + 1)
    {
        stack->stack_b[x+1] = stack->temp[x];
        x++;
    }
    free(stack->temp);
    stack->temp = malloc(sizeof(int)*(stack->stack_a_size+stack->stack_b_size));
}

void stack_temp1_a(t_stack *stack)
{
    int x;
    x = 0;
    while (x<stack->stack_a_size - 1)
    {
        stack->temp[x]=stack->stack_a[x+1];
        x++;
    }
    free(stack->stack_a);
    stack->stack_a = malloc(sizeof(int)*(stack->stack_a_size-1));
}

void pa_insert1_a(t_stack *stack)
{
    int x;
    x = 0;
    while (stack->temp[x])
    {
        stack->stack_a[x] = stack->temp[x];
        x++;
    }
    free(stack->temp);
}

void pb(t_stack *stack)
{
    stack->temp = malloc(sizeof(int)*(stack->stack_b_size));
    stack_temp1_b(stack);
    stack->stack_b[0]=stack->stack_a[0];
    pa_insert1_b(stack);
    stack_temp1_a(stack);
    pa_insert1_a(stack);
    stack->stack_a_size -= 1;
    stack->stack_b_size += 1;
    printf("pb\n");
}