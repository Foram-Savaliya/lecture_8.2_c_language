#include<stdio.h>

void main()
{
	int s,e;
	int leap[50];
	
	printf("enter the first year:");
	scanf("%d",&s);
	
	printf("enter the first year:");
	scanf("%d",&e);
	
	int i,k=0;
	printf("leap year between first year and second year is:\n");
	for(i=s;i<=e;i++)
	{
		if(i%4==0 || i%100==0 || 1%400==0)
		{
			k++;
			leap[k] = i;
			printf("%d ",leap[k]);	
		}	
	}	
}
