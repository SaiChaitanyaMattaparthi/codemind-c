#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%9==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}