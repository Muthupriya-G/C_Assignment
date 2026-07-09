#include<stdio.h>
int main(){
	int arr[5],i,j,b=0,sum[5],arr1[5];
	printf("Enter the number:");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("sum array:");
	j=4;
	for(i=0;i<5;i++){
		    arr1[i]=arr[j];
		    j--;
	}
    //for(i=0;i<5;i++){
	//	printf("%d\n",arr1[i]);
//	}
	for(i=0;i<5;i++){
		sum[i]=arr[i]+arr1[i];
			}
	for(j=0;j<5;j++){
		printf("%d\n",sum[j]);
	}
}
