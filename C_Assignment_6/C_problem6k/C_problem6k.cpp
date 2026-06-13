#include<stdio.h>
int main()
{
	int x,y,z=0;
	printf("Enter the number:");
	scanf("%d",&x);
	y=x;
	while(y!=0)
	{
		y=y/10;
		z=z+1;	
	}
	printf("%d",z);
}
