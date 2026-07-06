#include<stdio.h>
int main(){
	int x;
	int y,z,f,l,p=1,m,r,n=0,i,temp,a,k,b=1,j=1;
	printf("Enter the number:");
	scanf("%d",&x);
	while(j==1){
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
	j=0;
   }
}

