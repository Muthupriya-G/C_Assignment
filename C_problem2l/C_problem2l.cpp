#include<stdio.h>
int main()
{
	int x,y,t,o;
	printf("Enter the 2 digit number:");
	scanf("%d",&x);
	t=x/10;
	o=x%10;
	y = (t >= o) ? 1 : 0;
	printf("The Result is: %d",y);
}
