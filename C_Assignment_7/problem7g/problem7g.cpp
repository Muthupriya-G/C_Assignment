#include<stdio.h>
int i,a=0,b=0,c=0,d=0;
void disp_2digit_odd_below20(){
	for(i=10;i<100;i++){
		a=i%2;
		if(a==1){
			b=i%10;
			c=i/10;
			d=c+b;
			if(d==7){
				printf("%d\n",i);
			}
		}
	}
}
int main()
{
	disp_2digit_odd_below20();
	return 0;
}
