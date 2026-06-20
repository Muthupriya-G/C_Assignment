#include<stdio.h>
int i,a=0,b=0,c=0,d=0;
void disp_2digit_even_sum6(){
	for(i=10;i<100;i++){
		a=i%10;
		if(a==5){
			b=b+i;
		}
	}
	printf("%d",b);
}
int main()
{
	disp_2digit_even_sum6();
	return 0;
}
