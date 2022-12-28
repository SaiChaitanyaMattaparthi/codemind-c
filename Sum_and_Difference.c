#include<stdio.h>
int main()
{
    int a,b;
    float x,y;
    scanf("%d%d%f%f",&a,&b,&x,&y);
    printf("%d %d
",a+b,a-b);
    printf("%.1f %.1f",x+y,x-y);
}