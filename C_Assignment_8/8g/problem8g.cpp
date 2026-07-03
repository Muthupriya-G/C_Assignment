#include<stdio.h>
int disp_reverse_number(int);
int main(){
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	y= disp_reverse_number(x);
	//printf("%d",y);
}
int disp_reverse_number(int z){
	int x,y,a=0;
	x=z;
	while(x != 0){
		y=x%10;
		x=x/10;
		a=a+1;
		printf("%d",y);
	}
	return a;
}
