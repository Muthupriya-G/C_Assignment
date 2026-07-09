#include<stdio.h>
int main(){
	int arr[100],i=0,j,sum=0;
	printf("Enter the elements:");
	while(1){
		scanf("%d",&arr[i]);
		if(arr[i] == 0){
			break;
		}
		i++;
	}
	printf("Number of elements:%d\n",i);
	if(arr[0] == arr[i-1]){
		printf("Success");
	}
	else{
		printf("Failure");
		
	}
}
