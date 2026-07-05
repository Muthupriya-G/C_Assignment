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
	int y,z,a,b=0;
	while(x != 0 && x != 1){
		y=x%10;
		x=x/10;
		z=x%10;
		if(z != 0){
		a=(z*10)+y;
		//printf("\n%d",a);
		}
		if(a%2 == 1){
			b=b+1;
		  }
	}
	return b;
}

