#include <stdio.h>
void  main()
{
   int i, n, a[100];
   printf(" the number of elements in the array :");
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      printf("element - %d : ", i);
      scanf("%d", &a[i]); 
   }
  printf("enter the revers of numner:");
   for (i = n - 1; i >= 0; i--)
   {
       printf("%d", a[i]); 
   }
   printf("\n\n");
}
