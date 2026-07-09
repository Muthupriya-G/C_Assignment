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
	for(j=0;j<i+1;j++){
		sum=sum+arr[j];
	}
	printf("Total sum:%d",sum);
}
