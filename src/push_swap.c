#include "../library/push_swap.h"

int struct_init(int ac,char **av,t_stack *stack)
{
    int x;
    x = 0;
    stack->stack_a=malloc(sizeof(int)*ac);
    stack->stack_b=malloc(sizeof(int)*ac);
    stack->stack_a_size = ac - 1;
    stack->stack_b_size = 0;
    while (x < ac - 1)
    {
        stack->stack_a[x]=atoi(av[x+1]);
        x++;
    }
    return (1);
}

void print_stack(t_stack stack)
{
    int x;
    x = 0;
    printf("Stack [A]\n");
    while (x<stack.stack_a_size)
    {
        printf("Index [%d] : %d\n",x,stack.stack_a[x]);
        x++;
    }
    x = 0;
    printf("Stack [B]\n");
    while (x<stack.stack_b_size)
    {
        printf("Index [%d] : %d\n",x,stack.stack_b[x]);
        x++;
    }
    printf("------------------------\n");
    x = 0;
    while (x<stack.stack_a_size)
    {
        printf("Lis Index [%d] : %d\n",x,stack.lis[x]);
        x++;
    }
    printf("------------------------\n");
}

int main(int argc,char **argv)
{
    t_stack stack;
    struct_init(argc,argv,&stack);
    push_swap_lis(&stack,argc);
    print_stack(stack);
}