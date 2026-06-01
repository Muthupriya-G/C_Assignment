#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the three digit number: ");
	scanf("%d",&x);
	y=x%100;
	y=y/10;
	printf("The ten's digit is: %d",y);
}
