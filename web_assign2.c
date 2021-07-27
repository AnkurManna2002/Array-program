//Given an array and provided the positions of the elements, write a program to swap the two elements in that array.
#include<stdio.h>
int main()
{
	int arr[50],n,temp=0,i,pos1,pos2;
	printf("Enter the size of array::");
	scanf("%d",&n);
	printf("Enter the elements of the array::");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter pos1::");
	scanf("%d",&pos1);
	printf("Enter pos2::");
	scanf("%d",&pos2);
	temp=arr[pos1-1];
	arr[pos1-1]=arr[pos2-1];
	arr[pos2-1]=temp;
	printf("Output\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}
