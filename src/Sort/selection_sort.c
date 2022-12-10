#include "../../library/push_swap.h"

void selectionSort(int *temp_stack,int size)
{
    int i;
    int j;
    int enKucuk;
    int temp;

    i = 0;
    j = 0;
    while(i<size-1)
    {
         enKucuk = i;
         j = i + 1;
         while(j<size)
         {
            if (temp_stack[j] < temp_stack[enKucuk])
                enKucuk = j;
            j++;
         }
         temp = temp_stack[i];
         temp_stack[i] = temp_stack[enKucuk];
         temp_stack[enKucuk] = temp;
         i++;
    }
}