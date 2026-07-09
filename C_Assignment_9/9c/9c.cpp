#include<stdio.h>
int main(){
	int arr[5],i,small;
	printf("Enter the number:");
	small=arr[0];
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		if(small>arr[i]){
			small=arr[i];
		}
	}
	printf("small:%d",small);
}
