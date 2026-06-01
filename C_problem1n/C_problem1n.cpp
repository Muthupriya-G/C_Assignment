#include<stdio.h>
int main()
{
	int x,t,z,h,y,i;
	printf("Enter the 4 digit number:");
	scanf("%d",&x);
	printf("The reversed 4 digit number is:");
	t=x/1000;
	z=x/100;
	h=z%10;
	printf("%d%d",t,h);
	for(i=0;i<2;i++)
	{
		z=x%10;
		y=z;
		printf("%d",z);
		x=x/10;
	}
	
}
