#include<stdio.h>
int main(){
	int arr[5],i,large=0;
	printf("Enter the number:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		if(large<arr[i]){
			large=arr[i];
		}
	}
	printf("largest:%d",large);
}
