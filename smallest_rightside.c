#include<stdio.h>
findsmall(int arr[], int n)
{
	
	int i;
	int j,next;
	for(i=0;i<n;i++)
	{
		next =-1;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				
				next = arr[j];
				break;
			}
			
		}		
		printf("%d, ",next);
		
	}
	
}
main()
{
	int arr[] ={4,2,1,5,3};
	findsmall(arr,5);
}