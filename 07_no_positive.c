#include<stdio.h>
int main(){
        int number;
        int positive = 0;
        while(1){
                printf("Number: ");
                scanf("%d",&number);
                if (number == 0){
                        break;
                }
                else if(number > 0){
                        positive++;
                }
        }
        printf("Postive: %d\n",positive);
        return 0;
}
