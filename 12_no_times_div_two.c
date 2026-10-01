#include<stdio.h>
int main(){
	int number;
	printf("Number: ");
	scanf("%d",&number);
	int no_times_div = 0;
	while(number > 1){
		no_times_div++;
		number /=2;
	}
	printf("%d Times",no_times_div);
	return 0;	
}
