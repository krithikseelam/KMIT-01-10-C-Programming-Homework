#include<stdio.h>
int main(){
        int number;
        int smallest,largest = 0;
	printf("Number: ");
	scanf("%d",&number);
	smallest = number;
        while(1){
                printf("Number: ");
                scanf("%d",&number);
                if(number == 0){
                        break;
                }
                else if(number < smallest){
                        smallest = number;
                }
        }
        printf("Smallest: %d",smallest);
        return 0;
}

