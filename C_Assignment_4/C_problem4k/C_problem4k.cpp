#include<stdio.h>
int main()
{
	int x,y,a,c=0;
	printf("Enter the number:");
	scanf("%d",&x);
	y=x;
	loop :if(y > 0){
    	a=y%10;
    	c=c+a;
		y=y/10;
	    goto loop;
	}
	printf("%d",c);
}
