#include<stdio.h>

void main()
{
	int r,c,i,j;
	
	printf("Enter the row : ");
	scanf("%d",&r);
	printf("Enter the columns : ");
	scanf("%d",&c);
	
	int a[10][10];
	printf("Enter array's elements :  \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		    printf("\n");
	}
	
	int transpose[10][10];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			transpose[j][i] = a[i][j];
		}
	}
	printf("The transpose matrix of an array : \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",transpose[i][j]);
			
		}
		    printf("\n");
	}
	
}
