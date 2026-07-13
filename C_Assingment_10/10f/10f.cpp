#include<stdio.h>
int main(){
	char num[50];
	int i;
	printf("Enter the number:");
	scanf("%s",num);
	for(i=0;num[i] !='\0';i++){
		printf("\n%c",num[i]);
	}
}
