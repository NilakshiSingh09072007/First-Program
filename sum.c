#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
    printf("enter a positive integer:");
    scanf("%d",&n);
    for (i=1; i<=n;i++);
    {
        sum+=i;

    }
    printf("sum of first %d number is:%d\n",n,sum);
    return 0;
}