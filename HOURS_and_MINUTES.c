#include<stdio.h>
int main()
{
    int h,m,s;
    scanf("%d",&s);
    h=s/60;
    s=s%60;
    printf("%d Hour(s) %d Minute(s)",h,s);
}