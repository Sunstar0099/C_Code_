#include<stdio.h>
#include<stdint.h>

void reverse(int);

int main()
{
	int num;
	printf("Enter the number ");
	scanf("%d",&num);
	reverse(num);
	printf("\n");
	return 0;
}


void reverse(int num)
{
	int x;
	if(num!=0)
	{
		x=num%10;
		printf("%d",x);
		num=num/10;
		reverse(num);
	}
	return ;
}


