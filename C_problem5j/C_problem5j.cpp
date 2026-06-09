#include<stdio.h>
int main(){
	int i,y,z,a=0;
    for(i=10;i<100;i++)
	{
		y=i/10;
		z=i%2;
	if(y==7 && z==1){
			a=a+i;
		}
}
printf("%d",a);
}
