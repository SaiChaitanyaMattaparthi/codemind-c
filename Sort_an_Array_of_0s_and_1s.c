#include<stdio.h>
int main()
{
    int n,i,j,h,o,arr[1000],k[1000],s[1000],l[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    j=0;
    h=0;
    o=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            k[j]=arr[i];
            j+=1;
            
        }
        else{s[j]=arr[i];
        h+=1;
            
        }
        
    }
    for(i=0;i<h;i++)
    {
        l[o]=s[i];o+=1;
        
    }
    for(i=0;i<j;i++)
    {
        l[o]=k[i];
        o+=1;
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",l[i]);
        
    }
}