
#include<stdio.h>
int main()
{
    int bob=0,alice=0;
    int a[100],b[100];
    for(int i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<3; i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i])
        {
            alice++; 
                              
        }
        else if(a[i]==b[i])
        {
            bob=bob;
            alice=alice;
        }
        else 
        {
            bob++;
        }
        
    }
    printf("%d ",alice);
    printf("%d ",bob);
}
