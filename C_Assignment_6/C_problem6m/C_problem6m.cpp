#include<stdio.h>
int main()
{
	int x,y,z=0,a;
	printf("Enter the number:");
	scanf("%d",&x);
	y=x;
	while(y!=0)
	{
		a=y%10;
		y=y/10;
		z=z+1;
		printf("%d",a);	
	}

}
