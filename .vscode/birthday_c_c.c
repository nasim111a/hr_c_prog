
 #include<limits.h>
#include<stdio.h>
int main()
{
    int a[1000000],n,c=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
                           
    }
    for(int i=0; i<n; i++)
    {
        if(max==a[i])
        {
            c++;
        }
    }
   
    printf("%d",c);
}
