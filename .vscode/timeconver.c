#include<stdio.h>
#include<string.h>
int main()
{
    int h,m,s;
    char p[3];
    scanf("%d:%d:%d%s",&h,&m,&s,p);
    if(strcmp(p,"PM")==0 && h!=12)
    {
        h=h+12;
    }
    else if(strcmp(p,"AM")==0 && h==12)
    {
        h=0;
    }
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
