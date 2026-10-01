#include<stdio.h>
int main(){
	long long number;
	int digit,target;
	int repeat = 0;
	printf("Give a number: ");
	scanf("%lld",&number);
	printf("Digit: ");
	scanf("%d",&target);
	while(number > 0){
		digit = number % 10;
		if(digit == target){
			repeat++;
		}
		number = number/10;
	}
	printf("%d occurrs %d times",target,repeat);
	return 0;
}
