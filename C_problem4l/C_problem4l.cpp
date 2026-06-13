#include<stdio.h>
int main()
{
	int x,y,a,c=0;
	printf("Enter the number:");
	scanf("%d",&x);
	y=x;
	loop :if(y > 0){
    	a=y%10;
		y=y/10;
		printf("%d",a);
	    goto loop;
	}
}
