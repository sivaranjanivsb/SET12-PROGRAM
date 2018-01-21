#include<stdio.h>

int main(void) {
	 int k,l,m[5],i,count=0;
	 printf("get the numbers\n");
	 for(i=0;i<5;i++)
	 {
	 scanf("%d",&m[5]);
	}
	printf("enter the number to verify\n");
	scanf("%d %d",&k,&l);
	for(i=0;i<5;i++)
		{
	
		while((k=m[i])||(l=m[i]))
		{
			count++;
			
		}
		
	}
	if(count>=1)
	{
		printf("no is present");
		
	}
	else
		{
			printf("no is not present");
		}
	return 0;
}
 
