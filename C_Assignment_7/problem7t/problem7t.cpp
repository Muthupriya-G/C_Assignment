#include<stdio.h>
int x,y,i,a=0,j,z,b,c,d,e;
void check_first_2digits_prime(){
	printf("Enter the number:");
	scanf("%d",&x);
	for(j=0;j<3;j++){
		if(j==0){
			z=x%10;
			b=x/10;
		}
		else if(j==1){
			c=b%10;
			b=c/10;
		}
		else{
			e=b%10;
		}
	}
	d=(e*10)+c;
	for(i=1;i<d;i++){
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
