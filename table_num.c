#include<stdio.h>
#include<stdint.h>

int main()
{
	uint16_t num,i=1,x;
	printf("Enter the number:");
	scanf("%hd",&num);

	x=num;
	while(i<=10)
	{
		x=i*num;
		printf("%hd * %hd = %hd",num,i,x);
		printf("\n");
		i++;
	}
	return 0;
}
