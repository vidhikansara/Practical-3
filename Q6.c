#include<stdio.h>
long power(int ,int);

int main()
{
    int num,pow;
    printf("\nEnter number: ");
    scanf("%d",&num);
    printf("\nenter power value: ");
    scanf("%d",&pow);
    printf("power %d for value %d is : %ld",pow,num,power(num,pow));

}
long power(int n,int p)
{
    if(p)
        return (n*power(n,p-1));
    return 1;
}
