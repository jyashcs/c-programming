#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i = 0;
    int j = strlen(a) - 1;
    int count = 0;
    printf("ENTER CHARACTER :");
    scanf("%s", a);
    while (i < j)
    {
        if (a[i++] != a[j--])
        {
            count = 1;
            break;
        }
    }

    printf(count == 0 ? "Word is Palindrome" : "Word is not plaindrome");
    return 0;
}
