#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter the array's size :-  ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Negative elements from an Array: ");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d,",a[i]);
		}
    
    }  
	
}
