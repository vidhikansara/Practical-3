#include<stdio.h>
void honoi(char ,char ,char ,int);

void main()
{
    int n;
    printf("\nInput number of disc: ");
    scanf("%d",&n);
    printf("\nTower of honoi for :%d  ",n);
    honoi('A','B','C',n);
}
void honoi(char peg1,char peg2,char peg3,int n)
{
    if(n<=0)
        printf("\nInvalid entry");
    if(n==1)
        printf("\nMove disk from %c to %c",peg1,peg3);
    else
    {
        honoi(peg1,peg3,peg2,n-1);
        honoi(peg1,peg2,peg3,1);
        honoi(peg2,peg1,peg3,n-1);
    }
}
