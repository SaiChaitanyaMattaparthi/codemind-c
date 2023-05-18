#include <stdio.h>
int main() {
    int array[100];  // Declare an array of integers
    int size,sum=0,i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        if(array[i]%2!=0)
        {
            sum+=array[i];      
        }
    }
    printf("%d
",sum);
    return 0;
}