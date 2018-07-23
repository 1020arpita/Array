#include<stdio.h>
reverse(int a[],int start,int end)
{
	int temp;
	while(start<end)
	{
		temp = a[start];
		a[start]= a[end];
		a[end]=temp;
		start++;
		end--;
		
		
	}
}
reverseg(int a[],int start,int n)
{
	int temp;
	a[1] = a[start];
	for(i=1;i<n;i++)
	{
		
	
}
	
printarr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	 printf("%d ",a[i]);
	 
	printf("\n");
}
main()
{
	int a[] = {1,2,3,4,5,6};
	printarr(a,6);
	reverse(a,0,5);
	printarr(a,6);
	reverseg(a,2,6);
	printarr(a,6);
}
	