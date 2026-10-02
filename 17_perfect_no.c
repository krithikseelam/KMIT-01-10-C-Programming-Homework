#include<stdio.h>
int main(){
        int number;
        int sum_of_factors = 0;
        printf("Number: ");
        scanf("%d",&number);
        for(int factor = 0; factor < number;factor++){
                if(number%factor == 0){
                        sum_of_factors += factor;
                }
        }
	if(number == sum_of_factors){
		printf("%d is a perfect number",number);
	}
	else{
		printf("%d is not a perfect number !!",number);
	}
        return 0;
}
