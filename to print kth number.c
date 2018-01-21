#include<stdio.h>
int main()
{
	 int a[4],b,i;
	 scanf("%d",&b);
	 for(i=1;i<=4;i++)
	 {
	 scanf("%d",&a[i]);
	 }
	 for(i=1;i<=4;i++)
	 {
	 	if(i==b)
	 printf("%d",a[i]);
	 }
	 return 0;
}
