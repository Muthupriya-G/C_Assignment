#include<stdio.h>
int x,y,i,a=0;
void check_prime(){
	printf("Enter the number:");
	scanf("%d",&x);
	for(i=1;i<10;i++){
		y=x%i;
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
	check_prime();
	return 0;
}
