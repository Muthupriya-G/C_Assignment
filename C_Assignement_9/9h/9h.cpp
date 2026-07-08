#include<stdio.h>
int main(){
	int arr[5],i,j,o;
	printf("Enter the number:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Without the odd number:");
	for(j=0;j<5;j++){
		o=arr[j]%2;
		if(o==1){
			continue;
		}
		else{
			printf("%d\n",arr[j]);
		}
	}
}
