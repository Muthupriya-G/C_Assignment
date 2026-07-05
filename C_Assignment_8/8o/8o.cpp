#include<stdio.h>
int disp_biggest_4digit_number(void);
int main(){
	int y;
	y=disp_biggest_4digit_number();
	printf("%d",y);
}
int disp_biggest_4digit_number(void){
	int x,y;
	for(x=1000;x<10000;x++){
		if(x%7 ==0 && x%9 == 0){
            y=x;
		}	
	}
	return y;
}
