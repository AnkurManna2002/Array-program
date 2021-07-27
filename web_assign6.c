//Given an array consisting of numbers, write a program to print all even numbers in that given array.
#include <stdio.h>
int main()
{
	int a[100],i,n;
        printf("Enter the size of the array::");
 
        scanf("%d",&n);
        printf("Enter the elements of the array ::");
        for (i=0;i<n;i++) 
        {
            scanf("%d",&a[i]);
        }
 
        printf("Even numbers in the array are =  ");
        for (i=0;i<n;i++) 
        {
            if (a[i]%2==0) 
            {
                printf("%d\t",a[i]);
            }
        }
        return 0;
}
