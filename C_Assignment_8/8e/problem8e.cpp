#include<stdio.h>
int count_digits(int);
int main(){
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	y= count_digits(x);
	printf("%d",y);
}
int  count_digits(int z){
	int x,y,a=0;
	x=z;
	while(x != 0){
		y=x%10;
		x=x/10;
		a=a+1;
	}
	return a;
}
