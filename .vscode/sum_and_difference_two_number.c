#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d",&a);
    scanf("%d\n",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    printf("%d ",a+b);
    printf("%d\n",a-b);
    printf("%0.1f ",c+d);
    printf("%0.1f",c-d);
    
    return 0;
}
