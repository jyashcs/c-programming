#include <stdio.h>
int main()
{
    char a[100];
    int n, m, j;
    j = 0;
    char b[100];
    printf("ENTER CHAR & SLICING VALUE 1 & 2 ?");
    scanf("%s%d%d", a, &n, &m);
    for (int i = n; i <= m; j++, i++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';
    puts(b);
    return 0;
}