#include<stdio.h>

int sum(int);
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("sum of %d numbers is :%d",num,sum(num));
}
int sum(int n)
{
    if(n<=1)
         return n;
    else
        return n+sum(n-1);
}
