#include<stdio.h>

int printarray(int[],int,int);

int main()
{
	int arr[10],i, sz;
	printf("enter size:"); scanf("%d", &sz);
	printf("Enter elements:");
	for (i = 0; i < sz; i++)
		scanf("%d", &arr[i]);
	printf("Print elements: ");
	printarray(arr, 0,sz);
}
int printarray(int ar[],int st, int s)
{
	if (st >= s)
		return;
	printf("%d ", ar[st]);
	printarray(ar, st + 1, s);

}
