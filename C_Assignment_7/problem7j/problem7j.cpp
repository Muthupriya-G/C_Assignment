#include<stdio.h>
int i,a=0,b=0,c=0,d=0;
void disp_2digit_odd_sum_tens7(){
	for(i=10;i<100;i++){
		a=i%2;
		if(a==1){
			b=i/10;
			if(b==7){
				c=c+i;
			}
		}
	}
	printf("%d",c);
}
int main()
{
	disp_2digit_odd_sum_tens7();
	return 0;
}
