#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<=n-1; i++)
    {
        for(int j=n-1; j>=i+1; j--)
        {
            printf(" ");
        }
        
        for(int k=0; k<=i; k++)
        {
            printf("#");
        }
        printf("\n");
        
    }
    
}
