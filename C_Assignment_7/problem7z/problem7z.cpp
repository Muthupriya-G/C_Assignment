#include<stdio.h>
int x,y,z,j,a,b;
void disp_single_digit_prime(){
	printf("Enter the number:");
	scanf("%d",&x);
	while(x != 0){
		y=x%10;
		x=x/10;
		z=0;
		for(j=1;j<10;j++){
			b=y%j;
			if(b==0){
				z=z+1;
			}
		}
		if(z==2){
			a=a+1;
	    }	
	}
	printf("%d",a);
}
int main(){
	disp_single_digit_prime();
	return 0;
}
