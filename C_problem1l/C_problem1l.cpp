#include<stdio.h>
int main()
{
	int x,i,y,z;
	printf("Enter the two digit number: ");
	scanf("%d",&x);
	printf("The reversed digit is: ");
	for(i=0;i<2;i++)
	{
		z=x%10;
		y=z;
		printf("%d",z);
		x=x/10;
	}
	
}
