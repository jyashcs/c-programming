#include <stdio.h>
#include <string.h>
int main()
{
   int count = 0, a[] = {0,1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17};
   int b = sizeof(a) / sizeof(a[0]);
   for (int i = 0; i <= b-1; i++)
   {
      count += a[i];
   }
   printf("\nMISSING NUMBER  = %d ",((b*(b+1))/2)-count);
   return 0;
}