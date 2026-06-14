#include<stdio.h>
int main(){
	int x,y,a,b,d=0,i=0;
	printf("Enter the number:");
	scanf("%d",&x);
	y=x;
	while(y!=0)
	{
		a=y%10;
		b=y/10;
		y=b;
		for(i=1;i*i<=a;i++){
			if(i*i == a){
				d=d+1;
			}
		}
	}
	printf("%d",d);
}
