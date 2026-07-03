#include<stdio.h>
int disp_sum(int);
int main(){
	int x=0,y=0;
	y=disp_sum(x);
	printf("%d",y);
}
int disp_sum(int){
	int i,a=0;
	for(i=0;i<6;i++){
		a=a+i;
	}
	return a;
}
