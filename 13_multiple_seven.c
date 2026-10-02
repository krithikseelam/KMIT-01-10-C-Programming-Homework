#include<stdio.h>
int main(){
	int n;
	int value = 0;
	printf("Enter value of N: ");
	scanf("%d",&n);
	while(value < n){
		value = value + 7;
	}
	printf("First mulyiple of 7 greater than %d = %d",n,value);
	return 0;
}
