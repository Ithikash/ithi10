#include<stdio.h>

int main()
{
	int array[5] = {13, 10, 21, 28, 8};
	int i, n, j;

	printf("Enter the element to be deleted ");
	scanf("%d", &n);

	for( i = 0; i < 6; i++)
	{
		 if( array[i] == n)
		{
			for( j = i; j < 5; j++)
			{
				array[j] = array[j+1];
			}
			printf("\nElement Deleted");
			array[4] = 0;	
			break;	
		}	
		else if( i == 5)
		{
			printf("\nElement not found");
		}
	}
	printf(" \n Array after Deletion: ");
	for( i = 0; i < 5; i++)
	{
		printf("%d \t",array[i]);
	}	
}
		
