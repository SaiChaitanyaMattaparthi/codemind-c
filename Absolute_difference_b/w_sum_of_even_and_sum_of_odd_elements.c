#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum1=0,sum2=0,diff=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
    {
    	if(a[i]%2==0)
	    sum1=sum1+a[i];
    }
	    for(i=0;i<n;i++)
	   {
	       if(a[i]%2==1)
	       sum2=sum2+a[i];
	   }
	   diff= abs(sum1-sum2);
	   printf("%d",diff);
}