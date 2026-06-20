#include<stdio.h>
int i,a=0;
void disp_sum(){
	for(i=6;i>0;i--){
		a=a+i;
		}
	printf("%d\n",a);
}
int main()
{
	disp_sum();
	return 0;
}
