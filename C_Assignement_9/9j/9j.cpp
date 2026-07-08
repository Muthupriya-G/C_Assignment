#include<stdio.h>
int main(){
	int arr[5],i,j,b=0;
	printf("Enter the number:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Without the prime number:");
	for(i=0;i<5;i++){
		b=0;
		for(j=1;j<arr[i];j++){
			if(arr[i]%j == 0){
				b++;
			}
		}
		//printf("%d",b);
		if(b>2){
			printf("%d\n",arr[i]);
		}
	}
}
