#include<stdio.h>

void main()
{
	int r,c,i,j;
	
	printf("Enter rows :- ");
	scanf("%d",&r);
	printf("Enter columns :- ");
	scanf("%d",&c);
	
	int a[10][10];
	int sum=0;
	
	printf("Enter array's elements :- \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	
		printf("row : ");
		scanf("%d",&i); 
		
	        printf("elements of row %d:  ",i);
	        for(j=0;j<c;j++)
	         {
				printf("%d",a[i][j]);
				if(j < c-1)
				 printf(", ");
		     } 
	    
	        		printf("\n");
	        		
	    int r_sum = 0;
	    for(j=0;j<c;j++)
	    {
	    	r_sum+=a[i][j];
		}
		printf("The sum of row %d : %d\n",i,r_sum);
		
		
		printf("\ncolumn :");
		scanf("%d",&j);
		
		printf("elements of column %d :  ",j);
		for(i=0;i<r;i++)
		{
			printf("%d",a[i][j]);
			if(i <r-1)
			  printf(", ");
		}
		
		          printf("\n");
		          
		          
		int c_sum=0;
		for(i=0;i<r;i++)
		{
			c_sum+=a[i][j];
		}
		printf("The sum of column %d : %d\n",j,c_sum);
}
