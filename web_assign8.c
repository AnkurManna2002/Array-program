//Given an array of numbers, write a program to count Even and Odd numbers in that array
#include<stdio.h>
int main()
  {
      int  a[10],i,n,even=0,odd=0;
     printf("Enter the Size of the array:: ");
     scanf("%d",&n);
     printf("Enter the elements of the array:: ");
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
       if(a[i] % 2 == 0)
         {
             even++;
         }
       else
         {
             odd++;
         }
     }
     printf("Number of even numbers in the Array = %d",even);
     printf("\nNumber of odd numbers in the Array = %d",odd);
	  return 0;
 }
