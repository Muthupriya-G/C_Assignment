#include<stdio.h>
int disp_total_odd_digits(int);
int main(){
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	y=disp_total_odd_digits(x);
	printf("%d",y);
}
int disp_total_odd_digits(int x){
	int y=0,z=0,a=0,b=0;
	while(x != 0){
		y=x%10;
		x=x/10;
		if(y%2 == 1){
			a=a+1;
		}
	}
	return a;
}

