#include<stdio.h>
int x,y,z=0,a,b;
void disp_total_odd_digits(){
	printf("Enter the number:");
	scanf("%d",&x);
	while(x != 0){
		z=x%10;
		x=x/10;
		//x=y;
		if(z%2 == 1){
			a=a+1;
		}
	}
	printf("%d",a);
}
int main(){
	disp_total_odd_digits();
	return 0;
}
