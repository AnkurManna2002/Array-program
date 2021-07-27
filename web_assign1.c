//Given a array, write a program to swap first and last element of the array.
#include<stdio.h>
int main()
{
	int arr[50],n,temp=0,i;
	printf("Enter the size of array::");
	scanf("%d",&n);
	printf("Enter the elements of the array::");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	temp=arr[0];
	arr[0]=arr[n-1];
	arr[n-1]=temp;
	printf("Result::");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}
