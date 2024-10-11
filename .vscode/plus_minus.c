#include<stdio.h>
int main()
{
    int a[100],x;
    float neg=0,pos=0,zero=0;
    scanf("%d",&x);
    for(int i=0; i<x; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<x; i++)
    {
        if(a[i]>0)
        {
            pos++;
        }
        else if(a[i]<0)
        {
            neg++;
        }
        else 
        {
            zero++;
        }
    }
    float p,n,z;
    p=pos/x;
    n=neg/x;
    z=zero/x;
    printf("%f\n",p);
    printf("%f\n",n);
    printf("%f\n",z);
    return 0;
}
