#include<stdio.h>
int main()
{
    int x[1000],n,sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    
    for(int i=0; i<n; i++)
    {
       sum = sum + x[i];
    }
    printf("%d",sum);
    return 0;
}
