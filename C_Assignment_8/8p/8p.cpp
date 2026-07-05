#include<stdio.h>
int disp_count_sum14(void);
int main(){
	int y;
	y=disp_count_sum14();
	printf("%d",y);
}
int disp_count_sum14(void){
	int i,x,z,y,a=0;
	for(i=0;i<100000;i++){
		x=i;
		z=0;
		while(x != 0){
			y=x%10;
			x=x/10;
			z=z+y;
			//printf("\n%d",z);
		}
		if(z==14){
			a=a+1;
		}
	}
	return a;
}
