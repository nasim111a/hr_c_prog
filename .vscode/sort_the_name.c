#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("enter the number of names: ");
    scanf("%d",&n);
    char name[n][20],temp[20];
    printf("enter names: ");
    for(int i=0; i<n; i++)
    {
        scanf("%s",&name[i]);
    }


    printf("sorted names are: ");
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%s\n",name[i]);
    }

}