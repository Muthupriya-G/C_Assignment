#include<stdio.h>
int main()
{
	int x,y,n,i,z;
	printf("Enter the 3 digit number:");
	scanf("%d",&x);
	printf("The reversed 3 digit number is:");
	for(i=0;i<3;i++)
	{
		z=x%10;
		y=z;
		printf("%d",z);
		x=x/10;
	}
}
