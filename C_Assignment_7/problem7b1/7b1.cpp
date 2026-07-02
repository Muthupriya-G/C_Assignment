#include<stdio.h>
int x,y,z=0,i,a;
void disp_count_sum14(){
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
	printf("%d",a);
}
int main(){
	disp_count_sum14();
	return 0;
}
