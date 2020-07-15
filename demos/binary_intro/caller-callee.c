#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
   int m = 3;
   int n = 4;
   int o = -1;

   o = add(m, n);

   printf("%d\n", o);   

   return 0;
}
