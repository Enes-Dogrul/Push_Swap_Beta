#include "../library/push_swap.h"

void create_stack(t_stack *stack,int size)
{
    stack->stack_a=malloc(sizeof(int)*size);
    stack->stack_b=malloc(sizeof(int));
    stack->stack_a_size = size;
    stack->stack_b_size = 0;
}

int check_argv(char **tmp,int x,int y)
{
    while (tmp[y])
    {
        x = 0;
        while (tmp[y][x])
        {
            if(!(tmp[y][x] >='0' && tmp[y][x] <='9'))
                return (0);
            x++;
        }
        y++;
    }
    return (y);
}
void struct_split(char **av,t_stack *stack)
{
    char **tmp;
    int x;
    x = 0;
    tmp = ft_split(av[1],' ');
    if(check_argv(tmp,0,0) == 0)
        exit(1);
    else
        x = check_argv(tmp,0,0);
    create_stack(stack,x);
    x = 0;
    while (x < stack->stack_a_size)
    {
        stack->stack_a[x]=atoi(tmp[x]);
        x++;
    }
}

void struct_argv(int ac,char **av,t_stack *stack)
{
    int x;
    create_stack(stack,ac-1);
    x = 0;
    while (x < ac - 1)
    {
        stack->stack_a[x]=atoi(av[x+1]);
        x++;
    }
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

int main(int argc,char **argv)
{
    t_stack stack;
    struct_init(argc,argv,&stack);
    print_stack(&stack);
    //first_lower(&stack);
    short_sort(&stack);
    //sorting_100(&stack);
    //printf("\n---------------------------\n");
    //print_stack(&stack);
    //print_stack(stack);
}