#include<stdio.h>
int disp_rsum(int);
int main(){
	int x=0,y=0;
	y=disp_rsum(x);
	printf("%d",y);
}
int disp_rsum(int){
	int i,a=0;
	for(i=0;i<7;i++){
		a=a+i;
	}
	return a;
}
