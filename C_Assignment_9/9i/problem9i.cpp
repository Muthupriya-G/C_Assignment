#include<stdio.h>
int main(){
	int arr[5],i,j,o;
	printf("Enter the number:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Without the even number:");
	for(j=0;j<5;j++){
		o=arr[j]%2;
		if(o==0){
			continue;
		}
		else{
			printf("%d\n",arr[j]);
		}
	}
}
