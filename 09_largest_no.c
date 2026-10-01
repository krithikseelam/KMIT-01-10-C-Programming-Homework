#include<stdio.h>
int main(){
        int number;
	int largest = 0;
	while(1){
		printf("Number: ");
		scanf("%d",&number);
		if(number == 0){
			break;
		}
		else if(largest < number){
			largest = number;
		}
	}
	printf("largest: %d",largest);
        return 0;
}
