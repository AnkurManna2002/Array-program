//Given an array, print the value obtained after multiplying all numbers in that array.
#include<stdio.h>
int main()
{
	int  a[50],i,n,multi=1;
    printf ("Enter the number of element::");
    scanf("%d", &n);
    printf("Enter the elements of the array::");
 
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        multi=multi*a[i];
    }
    
    printf("Result=%d\n",multi);
}
