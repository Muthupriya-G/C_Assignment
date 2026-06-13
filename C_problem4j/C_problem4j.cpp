#include<stdio.h>
int main()
{
	int x,y,z=0;
	printf("Enter the number:");
	scanf("%d",&x);
	y=x;
	loop :if(x>0){
		if(y != 0){
    	y = x/10;
    	z=z+1;
	}
		x=y;
		goto loop;
	}
	printf("%d",z);
}
