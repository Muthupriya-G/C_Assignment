#include<stdio.h>
int sum_all_digits(int);
int main(){
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	y= sum_all_digits(x);
	printf("%d",y);
}
int sum_all_digits(int z){
	int x,y,a=0;
	x=z;
	while(x != 0){
		y=x%10;
		x=x/10;
		a=a+y;
	}
	return a;
}
