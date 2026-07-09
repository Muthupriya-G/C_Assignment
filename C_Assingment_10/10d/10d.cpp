#include<stdio.h>
int main(){
	int i=0,num=0;
	char arr[20];
	printf("Enter the number:");
	scanf("%s",arr);
	while(arr[i] != '\0'){
		num = num*10 + (arr[i] - '0');
		i++;
	}
	printf("The number is:%d",num);
}
