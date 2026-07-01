#include<stdio.h>
int x,y,i,a=0,z,b=0,c=0;
void check_prime_and_sum14(){
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=1;i<10;i++){
		y=x%i;
		if(y==0){
			a=a+1;
		}
	}
	while(x != 0){
		b=x%10;
		x=x/10;
		c=c+b;
	}
	if(a==2 && c==14){
		printf("Not Prime but sum is 14");
	}
	else if(a==2 && c!=14){
	    printf("Not Prime and sum is not 14");
	}
	else if(a!=2 && c==14){
		printf("Prime and the sum is 14");
	}
	else{
		printf("Prime and sum is not 14");
	}
}
int main(){
	check_prime_and_sum14();
	return 0;
}
