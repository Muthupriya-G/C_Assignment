#include<stdio.h>
int disp_2digit_one_sum_tens7(int);
int main(){
	int x=0,y=0;
	y=disp_2digit_one_sum_tens7(x);
	printf("%d",y);
}
int disp_2digit_one_sum_tens7(int){
	int i,a=0,b=0;
	for(i=10;i<100;i++){
		if(i%2 == 1){
			a=i/10;
			if(a == 7){
				b=b+i;
			}
}
	}
	return b;
}
