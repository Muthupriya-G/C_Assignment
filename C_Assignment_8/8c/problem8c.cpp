#include<stdio.h>
int disp_2digit_ones(int);
int main(){
	int x=0,y=0;
	y=disp_2digit_ones(x);
	printf("%d",y);
}
int disp_2digit_ones(int){
	int i,a=0;
	for(i=10;i<100;i++){
		if(i%10 == 5){
			a=a+i;
}
	}
	return a;
}
