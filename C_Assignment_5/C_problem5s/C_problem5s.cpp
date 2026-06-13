#include<stdio.h>
int main()
{
	int x,z,d,y=1,i,a=0,j,b;
	printf("Enter the number:");
	scanf("%d",&x);
	b=x;
	for(i=1;y!=0;i++)
	{
		y=x/10;
		x=y;
	}
    for(j=0;j<i-1;j++)
	{
	z=b%10;
	d=b/10;
	
	if(z%2 != 0){
		a++;
	}
	
	b=d;
}
printf("%d",a);
}
