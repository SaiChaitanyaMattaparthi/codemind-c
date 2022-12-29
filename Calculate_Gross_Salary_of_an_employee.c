#include<stdio.h>
int main()
{
    float basic,hra,da,gs,pf;
    scanf("%f%f%f",&basic,&hra,&da);
    pf=basic*12/100;
    gs=basic+hra+da+pf;
    printf("%.2f
%.2f
",pf,gs);
}