#include<stdio.h>
int main()
{
    long a[5],sum1=0,sum2=0;
    for(int i=0; i<5; i++)
    {
        scanf("%ld",&a[i]);
    }
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(a[j]<a[i])
            {
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            }
            
        }
    }
    
    for(int i=0; i<4; i++)
    {
        sum1=sum1+a[i];
    }
    printf("%ld ",sum1);
    for(int i=1; i<5; i++)
    {
        sum2=sum2+a[i];
    }
    printf("%ld",sum2);

}
