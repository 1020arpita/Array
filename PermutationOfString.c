#include<stdio.h>
swap(char*x,char *y)
{
	char temp;
	temp = *x;
	*x=*y;
	*y=temp;
}
permute(char *str,char l,char r)
{
	if(l==r)
	{
		printf("%s\n",str);
	}
	else{
		int i;
		for(i=l;i<=r;i++)
		{
			swap(str+l,str+i);
			permute(str,l+1,r);
			swap(str+1,str+i);
		}
	}
}
 main()
 {
	 char str[]="ABCD";
	 int  n;
	
	 n = strlen(str);
	 permute(str,0,n-1);
 }
