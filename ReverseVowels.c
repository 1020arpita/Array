#include<stdio.h>
int isVowel(char alphabet)
{
	if(alphabet =='a'|| alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u'||alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U')
		return 1;
	
	else
		return 0;
}

 ReversedVowel(char c[])
{
	int i,j=0;
	char vowel[10];
	for(i=0;c[i]!='\0';i++)
	{
		if(isVowel(c[i]))
		{
		 vowel[j++]=c[i];
		}
		
	}
	
	for(i=0;c[i]!='\0';i++)
	{
		if(isVowel(c[i]))
		{
			c[i]=vowel[--j];
		}
	}
      printf("Reversed vowel string :%s",c);
}
main()
{
	char c[] ="hello world";
	ReversedVowel(c);
	
}