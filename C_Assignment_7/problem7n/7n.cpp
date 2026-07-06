#include<stdio.h>
void disp_interchange_first_last_digit(int x){
	int y,z,f,l,p=1,m,r,n=0,i,temp,j,a,k,b=1,c,d;
	temp=x;
	while(x!=0){
		x=x/10;
		n++;
	}
	for(i=1;i<n;i++){
		p = p * 10;
	}
	a=i-1;
	for(k=1;k<a;k++){
		b = b*10;
	}
	l=temp%10;
    f=temp/p;
    z=temp/10;
    m=z-(f*b);
	r=l*p + m*10 +f;
	printf("%d",r);
}
int main(){
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	disp_interchange_first_last_digit(x);
	
}

