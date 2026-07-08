#include<stdio.h>
int main(){
	int arr[5],i,sum=0;
	printf("Enter the number:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("sum:%d",sum);
}
