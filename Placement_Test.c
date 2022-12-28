#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
     int x,y,s;
     scanf("%d%d",&x,&y);
     s=(x*y)/10;
     printf("%d
",s);
     }
}