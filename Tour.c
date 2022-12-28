#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d
",(a*5)+(b*7));
}
}