#include<stdio.h>
int main(){
        int number;
        int sum_of_factors = 0;
        printf("Number: ");
        scanf("%d",&number);
        for(int factor = 0; factor <= number;factor++){
                if(number%factor == 0){
			sum_of_factors += factor;
                }
        }
        printf("sum of factors of %d = %d",number,sum_of_factors);
        return 0;
}
