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
        printf("Negative numbers in the array are =  ");
        for (i=0;i<n;i++) 
        {
            if (a[i]<0) 
            {
                printf("%d    ",a[i]);
            }
        }
        return 0;
}
