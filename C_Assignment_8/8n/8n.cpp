#include<stdio.h>
int disp_single_digit_prime(int);
int main(){
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	y=disp_single_digit_prime(x);
	printf("%d",y);
}
int disp_single_digit_prime(int x){
	int y,z,a=0,i,b;
	while(x != 0){
		y=x%10;
		x=x/10;
		a=0;
		for(i=1;i<10;i++){
			z=y%i;
			if(z==0){
				a=a+1;
			}
		}
		if(a==2){
			b++;
		}
	}
	return b;
}
