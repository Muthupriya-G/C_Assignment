#include<stdio.h>
int i,a=0,b=0,c=0,d=0;
void disp_2digit_even_sum6(){
	for(i=10;i<100;i++){
		a=i%2;
		if(a==0){
			b=i%10;
			c=i/10;
			d=c+b;
			if(d==6){
				printf("%d\n",i);
			}
		}
	}
}
int main()
{
	disp_2digit_even_sum6();
	return 0;
}
