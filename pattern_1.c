#include<stdio.h>
#include<stdint.h>

int main()
{

	uint8_t  i, j,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i+1;j++)
		{
		printf("*");
		}
		for(k=5-i;k>0;k--)
		{
		printf(" ");
		}
	printf("\n");
	}
	return 0;
}
