//Given an array and a number x, count the number of occurrences of x in the given array.
#include<stdio.h>
int main()
{
	int arr[50],n,temp=0,i,x,count=0;
	printf("Enter the size of array::");
	scanf("%d",&n);
	printf("Enter the elements of the array::");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the number x::");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
			count++;
	}
	printf("Result::%d",count);
	
	
	return 0;
}
