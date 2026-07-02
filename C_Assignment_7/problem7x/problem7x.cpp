#include<stdio.h>
int x,y,a,i;
void disp_digit_square_number(){
	printf("Enter the number:");
	scanf("%d",&x);
	while(x != 0){
		y=x%10;
		x=x/10;
		for(i=0;i*i <= y;i++){
			if(i*i == y){
				a=a+1;
			}
		}
	}
	printf("%d",a);
}
int main(){
	disp_digit_square_number();
	return 0;
}
