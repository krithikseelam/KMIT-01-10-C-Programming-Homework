#include<stdio.h>
int main(){
	int n,power = 1;
	printf("Till which 2 power n : ");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		power = power*2;
		printf("%d\t",power);
	}

	return 0;
}

