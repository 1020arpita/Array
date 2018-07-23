#include<stdio.h>
total(int arr[],int n,int x)
{
	int i;
	int count =0;
	for(i=0;i<n;i++)
	{
		if(x!=arr[i])
		 continue;
	    
		else
			count++;
	}
	printf("Total occurences of %d is %d",x,count);
}
main()
{
	int arr[] = {2,3,4,9,5,6,6,7,8,9,9,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x=9;
	total(arr,n,x);
}