#include<stdio.h>
int x,y,z,a,b=0;
void disp_total_2digit_odd(){
	printf("Enter the number:");
	scanf("%d",&x);
	while(x != 0 && x != 1){
		y=x%10;
		x=x/10;
		z=x%10;
		if(z != 0){
		a=(z*10)+y;
		printf("\n%d",a);
		}
		if(a%2 == 1){
			b=b+1;
		  }
	}
	printf("\n%d",b);
}
int main(){
	disp_total_2digit_odd();
	return 0;
}
