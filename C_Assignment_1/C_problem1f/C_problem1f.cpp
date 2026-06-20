#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the two digit number: ");
	scanf("%d",&x);
	y=x%10;
	printf("The one's digit is : %d",y);
}
