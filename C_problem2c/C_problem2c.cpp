#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	y = (x < 50) ? 1 : 0;
	printf("The Result is: %d",y);
}
