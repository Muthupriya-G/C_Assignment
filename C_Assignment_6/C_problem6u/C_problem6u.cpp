#include<stdio.h>
int main(){
	int x,y,z,a,b,c,d=0;
	printf("Enter the number:");
	scanf("%d",&x);
	y=x;
	while(y!=0)
	{
		a=y%10;
		b=y/10;
		c=a%2;
		y=b;
		if(c==1){
			d=d+1;
		}
	}
	printf("%d",d);
}
