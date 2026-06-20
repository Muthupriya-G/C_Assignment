#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter the two digit number:");
	scanf("%d",&x);
	y=x%10;
	z=x-y;
	printf("The result is:%d",z);
}
