#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,d,sum=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(int i=1; i<=5; i++)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
