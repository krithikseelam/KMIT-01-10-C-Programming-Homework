#include<stdio.h>
int main(){
        int number,temp,digit;
        int reverse_no = 0;
        printf("Enter a number: ");
        scanf("%d",&number);
        temp = number;
        while(temp> 0){
                reverse_no = reverse_no * 10;
                digit = temp%10;
                temp = temp/10;
                reverse_no = reverse_no + digit;
        }
	if(number == reverse_no){
		printf("%d is a palindrome",number);
	}
	else{
		printf("%d is not a palindrome",number);
	}
        return 0;
}

