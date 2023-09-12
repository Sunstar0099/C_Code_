#include<stdint.h>
#include<stdio.h>

int main()
{
	uint8_t i,j,k;	
	
	for(i=0;i<7;i++)
	{
		printf("4");
		
		for(j=0;j<i;j++)
		{
			k=4-j-i;
			printf("%hhd",k);
			
			for(k=0;k<j;k++)
			{
				j=4-k-i;
				printf("%hhd",j);
			}
		}		
		/*for(j=;j<j-i)
		{	
			
		}
		for(j=0;j<j-i)
		{
		
		}	
		for(j=0;j<j-i)
		{
		
		}	
		for(j=0;j<j-i)
		{
		
		}*/	
		printf("\n");			
	}
return 0;
}
