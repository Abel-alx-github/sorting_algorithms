#include <stdio.h>
#include "sort.h"
void swap_int(int *a, int *b);
void swap_int(int *a, int *b)
{
          int tmp;
  
        tmp = *a;
         *a = *b;
         *b = tmp;
}
  
void main(void)
{
         int a[] = {1, 2};
  
         swap_int(&a[1], &a[0]);
         printf("%d, %d\n", a[0], a[1]);
}
