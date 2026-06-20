#include<stdio.h>
int main()
{
	int x,y,t,o,z;
	printf("Enter the 3 digit number:");
	scanf("%d",&x);
	z=x%100;
	t=z/10;
	o=x%10;
	y = (t >= o) ? 1 : 0;
	printf("The Result is: %d",y);
}
