#include <stdio.h>
#include<string.h>
int main()
{
    char k[] = "yashaswi";
    int count=0;
    for (int j = 0; k[j] != '\0'; j++)
    {
       if((k[j] == 'a' || k[j] == 'e' || k[j] == 'i' || k[j] == 'o' || k[j] == 'u') ) {
        count++;
       }
    }
    printf("VOWLES = %d", count);
    return 0;
}
