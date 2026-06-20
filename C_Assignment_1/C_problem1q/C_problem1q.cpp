#include<stdio.h>
int main()
{
	int x,y,z,a;
	printf("Enter the three digit number:");
	scanf("%d",&x);
	y=x%10;
	z=x-y;
	a=z+2;
	printf("The result is:%d",a);
}
