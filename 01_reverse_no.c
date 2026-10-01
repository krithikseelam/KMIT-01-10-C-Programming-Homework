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
	printf("Reverse of %d = %d",number,reverse_no);
	return 0;
}
