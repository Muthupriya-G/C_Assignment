#include<stdio.h>
int disp_two_digit_square(int);
int main(){
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	y=disp_two_digit_square(x);
	printf("%d",y);
}
int disp_two_digit_square(int x){
	int y,z,a=0,i,d=0;
		while(x >= 10){
		y=x%10;
		x=x/10;
		z=x%10;
		if(z != 0){
			d=(z*10)+y;
		}
		for(i=0;i<=10;i++){
			if(i*i == d){
				//printf("\n%d",d);
				a++;
			}
		}
	}
	return a;
}
