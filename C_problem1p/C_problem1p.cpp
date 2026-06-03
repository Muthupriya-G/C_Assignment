#include<stdio.h>
int main()
{
	int x,y,a,z;
	printf("Enter the number:");
	scanf("%d",&x);
	y=x/10;
	a=(y-1)*10;
	z=x-a;
	printf("The result is: %d",z);
}
