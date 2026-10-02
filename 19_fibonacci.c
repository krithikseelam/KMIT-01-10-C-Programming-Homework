#include<stdio.h>
int main(){
	int count = 0;
	int N;
	long long a =0,b=1,c;
	printf("Till which term do you want febonacci seriers: ");
	scanf("%d",&N);
	while(count < N){
		c = a + b;
		printf("%lld    ",a);
		a = b;
		b = c;
		count++;
		
	}
        return 0;
}


