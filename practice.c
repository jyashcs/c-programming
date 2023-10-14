#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int count = 0, i = 0, j;
    printf("ENTER CHARACTER ");
    scanf("%s", a);
    j = strlen(a) - 1;
    while (i < j)
    {
        if (a[i++] != a[j--])
        {
            count++;
        }
    }
    count == 0 ? printf("WORD IS PALINDROME") : printf("WORD IS NOT A PALINDROME");
    return 0;
}