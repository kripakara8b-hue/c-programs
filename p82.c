#include<stdio.h>
int main()
{
     int n,i;
    float sum=0.0,a;
    printf("\n Enter the value of n;");
    scanf("%d",&n);
    for(i=1;i<=n;i++)\
        {
            a=(float) 1/i;
            sum=sum+a;
        }
    printf("\n The sum of series 1/1+1/2+..1/%d=%.2f",n,sum)
        return 0;
}
