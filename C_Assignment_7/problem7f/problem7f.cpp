#include<stdio.h>
int i,a=0;
void disp_2digit_odd_below20(){
	for(i=11;i<21;i++){
		a=i%2;
		if(a==1){
		printf("%d\n",i);
		}
	}
}
int main()
{
	disp_2digit_odd_below20();
	return 0;
}
