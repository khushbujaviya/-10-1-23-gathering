//2 find Sum of all Array Elements by passing array as an argument using User Define Functions.
#include<stdio.h>
int sum(int a[100],int n)
{
	int s=0;
	int i;
	for(i=1;i<n;i++)
	{
		s=s+a[i];
		
	}
	return s;
}
main()
{
	int a[100];
	int x,i;
	int n;
	printf("enter number:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter value:");
		scanf("%d",&a[i]);
	}
	x=sum(a,n);
	printf("%d",x);
}
