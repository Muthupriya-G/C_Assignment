#include<stdio.h>
int disp_2digit_odd(int);
int main(){
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	y=disp_2digit_odd(x);
	printf("%d",y);
}
int disp_2digit_odd(int x){
	int y,z,d=0,a=0;
	while(x != 0 && x != 1){
		y=x%10;
		x=x/10;
		z=x%10;
		if(z != 0){
			d=(z*10)+y;
		}
		if(d%2 == 1){
			a=a+1;
		}
	}
	return a;
}
