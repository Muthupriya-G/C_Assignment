#include<stdio.h>
int disp_single_digit_square(int);
int main(){
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	y=disp_single_digit_square(x);
	printf("%d",y);
}
int disp_single_digit_square(int x){
	int y,z,a=0,i;
	while(x!=0){
		y=x%10;
		x=x/10;
		for(i=0;i<=y;i++){
			if(i*i == y){
				a=a+1;
			}
		}
	}
	return a;
}
