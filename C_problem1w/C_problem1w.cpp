#include<stdio.h>
int main()
{
	int x,y,t,z,r,a;
	printf("Enter the three digit number:");
	scanf("%d",&x);
	z=x%100;
	t=z/10;// ten's digit
	a=t*10;
	r=x-a;
	printf("The result is:%d",r);
}
