#include<stdio.h>
int main(){
	long long number;
	printf("Give a number: ");
	scanf("%lld",&number);
	while(number > 0){
		if(number % 10 == 0){
			printf("contains 0");
			break;
		}
		number = number/10;
	}
	if(number == 0){
		printf("doesnt contain 0");
	}
	return 0;
}
