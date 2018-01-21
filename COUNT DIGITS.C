#include <stdio.h>

int main(void) {
	int no,rem,count=0;
	printf("enter the number");
	scanf("%d",&no);
	
	while(no!=0)
	{
	rem=no%10;
	count++;
	no=no/10;
	}
	printf("the number of digits in a number is %d",count);
	return 0;
}

