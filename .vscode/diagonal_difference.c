#include<stdio.h>
int main()
{
    int x[100][100],n,sd1=0,sd2=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                sd1=sd1+x[i][j];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i+j)==n-1)
            {
                sd2=sd2+x[i][j];
            }
        }
    }
    int res = sd1-sd2;
    if(res<0)
    {
        res=-res;
    }
    printf("%d",res);
    return 0;
}
