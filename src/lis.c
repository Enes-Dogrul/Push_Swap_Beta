#include "../library/push_swap.h"

void push_swap_lis(t_stack *stack,int argc)
{
    stack->lis = malloc(sizeof(int)*argc);
    int *a = malloc(sizeof(int)*argc);
    int x;
    int y;
    y = 0;
    while (y<argc - 1)
    {
        stack->lis[y] = 1;
        y++;
    }
    y = 0;
    while(y < argc - 1)
    {
        x = 0;
        while(x < y)
        {
            if(stack->stack_a[x]<stack->stack_a[y])
            {
                if((stack->lis[x]+1) > stack->lis[y])
                {
                    a[0]=stack->stack_a[x];
                    printf("\na[0]%d",a[0]);
                    stack->lis[y] = stack->lis[x] + 1;
                }
            }
            x++;
        }
        y++;
    }
}