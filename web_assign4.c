/*Given an array. The task is to find the sum and average of the array. Average of the array is
defined as the sum of the elements divided by the number of the elements*/
#include  <stdio.h>
int main()
{
	int  a[50],i, n;
    float sum = 0.0, average;
    printf ("Enter the number of element::");
    scanf("%d", &n);
    printf("Enter the elements of the array::");
 
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    average=sum/n;
    printf("Sum =%.2f\n",sum);
    printf("Average=%.2f\n",average);
    return 0;
}
