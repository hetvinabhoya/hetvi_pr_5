#include<stdio.h>

void main()
{
	int r,c,i,j;
	
	printf("Enter row's: ");
	scanf("%d",&r);
	printf("Enter column's: ");
	scanf("%d",&c);
	
	int a[10][10];
	int max;
	
	printf("Enter array's elements:  \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]= ",i,j);
        	scanf("%d",&a[i][j]);
		}
	}
	
	max = a[0][0];
	printf("The largest element is :  \n");
	 for(i=0;i<r;i++)
	{
	 	for(j=0;j<c;j++)
	 	{
	 		if(a[i][j] > max)
	 		{
	 		    max = a[i][j];
			}
		}
	}
	            printf("%d",max);
}
