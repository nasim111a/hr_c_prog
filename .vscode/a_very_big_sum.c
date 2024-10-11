#include<stdio.h>
int main()
{
    int n;
    long x[10],sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%ld",&x[i]);
    }
    int length = sizeof(x)/sizeof(x[0]);
    for(int i=0; i<n; i++)
    {
        sum = sum+x[i];
    }
    printf("%ld",sum);
    return 0;
    
}
