#include<stdio.h>
int main(){
	int arr[100],i=0,j,m;
	printf("Enter the elements:");
	while(1){
		scanf("%d",&arr[i]);
		if(arr[i] == 0){
			break;
		}
		i++;
	}
	j=i%2;
	m=i/2;
	printf("The mid element:");
	if(j == 1){
		printf("%d\n",arr[m]);
	}
	else{
	    printf("%d %d\n",arr[m],arr[m+1]);
	}
}
