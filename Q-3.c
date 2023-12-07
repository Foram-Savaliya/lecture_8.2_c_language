#include<stdio.h>

void main()
{
	int n,i;
	printf("Enter Array A's Size:- ");
	scanf("%d",&n);
	
	int a[n];
	printf("enter array elements:-\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] :-",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]*a[i]);
	}
}
