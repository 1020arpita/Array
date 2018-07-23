#include<stdio.h>
printleftsmall(int arr[], int n)
{
	int i;
	printf("_, ");
	for(i=1;i<n;i++)
	{
		int j;
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]<arr[i])	
			{
				printf("%d, ",arr[j]);
				break;
			}
		}
		if(j==-1)
		{
			printf("_, ");
		}
	}

}
main()
{
	int arr[]={1,3,0,2,5};
	printleftsmall(arr,5);
}