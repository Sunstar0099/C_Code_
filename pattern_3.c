#include<stdio.h>
#include<stdint.h>

int main()
{

	uint8_t i,j,k;
	for(i=1;i<=3;i++)
	{
		for(j=3-i;j>0;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i*2-1;k++)
		{
			printf("*");
		}
		for(j=3-i;j>0;j--)
		{
			printf(" ");
		}
	printf("\n");
	}
	return 0;
}
