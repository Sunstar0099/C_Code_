#include<stdio.h>
#include<stdint.h>

int main()
{
	uint8_t i,j,k;
	for(i=0;i<5;i++)
	{	
		for(j=5-i;j>0;j--)
		{
			printf(" ");
		}
		
		for(k=0;k<=i;k++)
		{
			printf("*");
		}

	printf("\n");
	}
	return 0;
}
