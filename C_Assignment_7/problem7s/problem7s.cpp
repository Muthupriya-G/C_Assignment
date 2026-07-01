#include<stdio.h>
int x,y,i,a=0,j,z,b,c,d;
void check_first_2digits_prime(){
	printf("Enter the number:");
	scanf("%d",&x);
	for(j=0;j<2;j++){
		if(j==0){
			z=x%10;
			b=x/10;
		}
		else{
			c=b%10;
		}
	}
	d=(c*10)+z;
	for(i=1;i<10;i++){
		y=d%i;
		if(y==0){
			a=a+1;
		}
	}
	if(a==2){
		printf("Not Prime");
	}
	else{
	    printf("prime");
	}
}
int main(){
	check_first_2digits_prime();
	return 0;
}
