#include<stdio.h>
int main(){
	int number;
	int sum = 0;
	while(1){
		printf("Number: ");
		scanf("%d",&number);
		if(number == 0){
			break;
		}
		else{
			sum = sum + number;
		}
	}
	printf("Sum: %d",sum);
        return 0;
}

