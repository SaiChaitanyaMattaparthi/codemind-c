#include<stdio.h>
int main()
{
    int n,p=1,d,s=0;
    scanf("%d",&n);
    while(n) 
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10; 
        
    }
    printf("%d",p-s);
    
}