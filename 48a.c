#include <stdio.h>
int main() 
{
	int i,n,array[100],sum=0,avg;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+array[i];
	}
	avg=sum/n;
	printf("\n%d",sum);
	printf("\n%d",avg);
	return 0;
}
