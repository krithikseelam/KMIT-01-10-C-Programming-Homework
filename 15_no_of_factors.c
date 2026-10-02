#include<stdio.h>
int main(){
	int number;
	int no_of_factors = 0;
	printf("Number: ");
	scanf("%d",&number);
	for(int factor = 0; factor <= number;factor++){
		if(number%factor == 0){
			no_of_factors++;
		}
	}
	printf("no of factors of %d = %d",number,no_of_factors);
	return 0;
}
