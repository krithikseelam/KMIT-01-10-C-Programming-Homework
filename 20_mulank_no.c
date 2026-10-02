#include<stdio.h>
int main(){
	long long number,temp;
	int sum_of_digits = 0;
	printf("Enter a number for which you want mulank: ");
	scanf("%lld",&number);
	temp = number;
	while(temp > 0){
		sum_of_digits += temp%10;
		temp = temp/10;
		if(sum_of_digits >= 10 && temp == 0){
			temp = sum_of_digits;
			sum_of_digits = 0;
		}
	}
	printf("Mulank of %lld = %d",number,sum_of_digits);
	return 0;
}
