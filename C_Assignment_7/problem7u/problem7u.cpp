#include<stdio.h>
int x,y=0,i,j,a=0;
void disp_single_digit_prime(){
	for(i=1;i<10;i++){
		y=0;
		for(j=1;j<10;j++){
			x=i%j;
			if(x==0){
				y=y+1;
			}
		}
		if(y==2){
			a=a+1;
	    }	
	}
	printf("%d",a);
}
int main(){
	disp_single_digit_prime();
	return 0;
}
