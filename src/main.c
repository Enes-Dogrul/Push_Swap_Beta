#include "../library/push_swap.h"

void print_stack(t_stack *stack)
{
    int x;
    x = 0;
    printf("Stack [A]\n");
    while (x<stack->stack_a_size)
    {
        printf("Index [%d] : %d\n",x,stack->stack_a[x]);
        x++;
    }
    x = 0;
    printf("Stack [B]\n");
    while (x<stack->stack_b_size)
    {
        printf("Index [%d] : %d\n",x,stack->stack_b[x]);
        x++;
    }
    printf("------------------------\n");
}


void create_stack(t_stack *stack,int size)
{
    stack->stack_a=malloc(sizeof(int)*size);
    stack->stack_b=malloc(sizeof(int));
    stack->stack_a_size = size;
    stack->stack_b_size = 0;
}

int struct_init(int ac,char **av,t_stack *stack)
{
    if(ac < 1)
        printf("Argüman 1 Den Az");
    else if(ac == 2)
        struct_split(av,stack);
    else if (ac > 2)
        struct_argv(ac,av,stack);
    find_min(stack);
    find_max(stack);
    return (1);
}

int main(int argc,char **argv)
{
    if(argc > 1)
    {
        t_stack stack;
        struct_init(argc,argv,&stack);
        if(!(check_sorted(&stack)))
            return (0);
        short_sort(&stack);
        //sorting_100(&stack);
    }
    else
        printf("\n");
}