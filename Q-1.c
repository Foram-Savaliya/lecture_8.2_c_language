#include<stdio.h>

void main()
{
	int i,j,m,n,o;
	printf("Enter Array A's Size:- ");
	scanf("%d",&n);
	printf("\n");
	
	int a[n];
	printf("Enter array A's elements:\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] :-",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n");
	
	printf("Enter Array B's Size:- ");
	scanf("%d",&m);
	printf("\n");
	
	int b[m];
	printf("Enter array B's elements:\n");
	
	for(i=0;i<m;i++)
	{
		printf("enter b[%d] :-",i);
		scanf("%d",&b[i]);
	}
	
	o=m+n;
	int c[o];
	
	printf("Array of c is:- ");
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0,j=n;j<o && i<m;i++,j++)
	{
		c[j]=b[i];
	}
	for(i=0;i<o;i++)
	{
		printf("%d ",c[i]);
	}
}
