#include <stdio.h>
#include <string.h>
int main()
{
   char a[100] = "yash";
   char b[] = "123";
   printf("ENTER YOUR PASSWORD  ");
   scanf("%s", a);
   printf("%s", strcat(a, b));
   return 0;
}