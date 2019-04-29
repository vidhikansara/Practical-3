#include<stdio.h>
int sum(int a);
int count(int);
int main()
{
	int num, result;

	printf("Enter the number: ");
	scanf_s("%d", &num);
	result = sum(num);
	printf("Sum of digits in %d is %d\n", num, result);
	printf("number of digits: %d", count(num));
	return 0;
}

int sum(int num)
{
	if (num != 0)
	{
		return (num % 10 + sum(num / 10));
	}
	else
	{
		return 0;
	}


}
int count(int n)
{
	int c = 0;
	if (n!=0)
	{
		c++;
		count(n/10);
	}
	else
	{
		return c;
	}

}
