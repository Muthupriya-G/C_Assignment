#include<stdio.h>
int main()
{
	int x,y,z,a;
	printf("Enter the number:");
	scanf("%d",&x);
	y=x-5;
	z=y/100;
	a=z%2;
	switch (a)
		{
		case 0:
			printf("Even number: %d",x);
			break;
		case 1:
			printf("Odd number: %d",y);
			break;
		}
		
}
