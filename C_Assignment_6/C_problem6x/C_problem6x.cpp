#include<stdio.h>
int main(){
	int x=1000,y,z,a;
	while(x<10000){
		y=x%7;
		z=x%9;
		if(y==0 && z==0){
			if(a<x){
				a=x;
			}
		}
		x++;
	}
	printf("%d",a);
}
