#include<stdio.h>
int main()
{
    int eng,math,phy,chem,cs;
    scanf("%d%d%d%d%d",&eng,&math,&phy,&chem,&cs);
    if(eng>34 && math>34 && phy>34 && chem>34 && cs>34)
    {
        printf("PASSED");
    }
    else 
    {
        printf("FAILED");
    }
}