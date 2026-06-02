#include<stdio.h>
int main()
{
	int x,t,z,h,y,o,a,b;
	printf("Enter the 4 digit number:");
	scanf("%d",&x);
	printf("The reversed 4 digit number is:");
	y=x/100;
	h=y%10;
	t=y/10;
	printf("%d%d",h,t);
	a=x%100;
	z=a/10;
	o=a%10;
	printf("%d%d",z,o);
	
	
}
