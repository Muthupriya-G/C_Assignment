#include<stdio.h>
int main()
{
	int x,t,z,h,y,i,a;
	printf("Enter the 4 digit number:");
	scanf("%d",&x);
	printf("The reversed 4 digit number is:");
	t=x/1000;
	z=x/100;
	h=z%10;
	printf("%d %d",h,t);
	z=x%1000;
    a=z/100; 
    i=z%10;
	printf("%d %d",a,i);
		
}
