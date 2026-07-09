#include<stdio.h>
int main(){
	int arr[100],i=0,j,arr1[100],k,temp,m;
	printf("Enter the elements:");
	while(1){
		scanf("%d",&arr[i]);
		if(arr[i] == 0){
			break;
		}
		i++;
	}
	for(j=0;j<i;j++){
	     arr1[j]=arr[j];
	}
	for(j=0;j<i-1;j++){
	    for(k=0;k<i-1-j;k++){
		   if(arr1[k]>arr1[k+1]){
			     temp=arr1[k];
			     arr1[k]=arr1[k+1];
			     arr1[k+1]=temp;
		}
	   }	
	}
	printf("Sorted array:");
	for(m=0;m<i;m++){
		printf("%d\n",arr1[m]);
	}
}
