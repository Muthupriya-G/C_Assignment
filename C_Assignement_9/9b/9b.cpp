#include<stdio.h>
int main(){
	int arr[5],i,sum=0,avg;
	printf("Enter the number:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	avg=sum/5;
	printf("Avg:%d",avg);
}
