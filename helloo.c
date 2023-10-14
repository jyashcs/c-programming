#include<stdio.h>
int main ()
{
    int n[]={1,2,5,7,7,7,8,0};
    int nn;
    int a=0;
    printf("which number do you want to find");
    scanf("%d",&nn);
    for(int i=0; i<=7; i++){
    if(nn==n[i]){
        a++;
    }}printf("This number is repeated %d time in the array ", a);
    return 0;
}