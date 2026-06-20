#include<stdio.h>
int i,a=0;
void disp_odd(){
	for(i=1;i<10;i++){
		a=i%2;
		if(a==1){
		printf("%d\n",i);
		}
	}
}
int main()
{
	disp_odd();
	return 0;
}
