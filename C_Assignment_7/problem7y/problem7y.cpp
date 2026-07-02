#include<stdio.h>
int x,y,z,a,b=0,i;
void disp_two_digit_square(){
	printf("Enter the number:");
	scanf("%d",&x);
	while(x >= 10){
		y=x%10;
		x=x/10;
		z=x%10;
		if(z != 0){
		a=(z*10)+y;
		//printf("\n%d",a);
		}
		for(i=0;i <= 10;i++){
			if(i*i == a){
				b=b+1;
			}
			printf("\n%d %d",a,b);
		}
	}
	printf("\n%d",b);
}
int main(){
	disp_two_digit_square();
	return 0;
}
