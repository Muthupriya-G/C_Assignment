#include<stdio.h>
int x,y,z;
void disp_biggest_4digit_divby_7_9(){
	for(x=1000;x<10000;x++){
		if(x%7 ==0 && x%9 == 0){
            y=x;
		}	
	}
	printf("%d",y);
}
int main(){
	disp_biggest_4digit_divby_7_9();
	return 0;
	
}
