#include<stdio.h>
int main(){
	long long number,temp;
	int sum_ends = 0;
	printf("Give a number: ");
	scanf("%lld",&number);
	temp = number;
	while(temp > 0){
		if(temp == number || temp < 10){
			sum_ends = sum_ends + temp%10;
		}
		temp = temp/10;
	}
	printf("Sum of ends  = %d",sum_ends);
	return 0;	
}
