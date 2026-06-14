#include<stdio.h>
int main(){
	int x=2,y,b,i,z=0;
	while(x<10){
		b=0;
		for(i=2;i<x;i++){
		y=x%i;
		if(y==0){
			b=b+1;
		}
	}
	   if(b == 0)
	   {
	      z++;
       }
	x++;
	}
	printf("%d",z);
}
