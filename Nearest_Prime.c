#include<stdio.h>
int main()
{
    int t,d,r,i,n,m,c=0,j;
    scanf("%d",&n);
    for(r=0;r<n;r++)
    {
        scanf("%d",&m);
        for(i=m;i>2;i--) 
        {
            c=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                { 
                    c=1;
                    break; 
                    
                } 
                
            }
            if(c==0) 
            {
                t=i; 
                break;
                }
                }
                for(i=m;i<m+100;i++)
                {
                    c=0;
                    for(j=2;j<i;j++)
                    {
                        if(i%j==0) 
                        {
                            c=1;
                            break;
                            }
                            }
                            if(c==0)
                            {
                                d=i;
                                break; 
                                
                            }
                            }
                            if((m-t)<=(d-m))
                            {
                                
    printf("%d
",t);
    }
    else
    {
        printf("%d
",d); 
        
    }
    }
}