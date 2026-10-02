#include<stdio.h>
int main(){
	int no1, no2;
	int i;

	// taking 2 nos for finding GCD

	printf("Give 2 numbers: \n");
	scanf("%d",&no1);
	scanf("%d",&no2);

	if (no1 == 0 || no2 == 0){
		printf("number should not be equalt to 0");
	}
	else{
		//finding least no of 2 nos taken so we take itrating variable as least no

		if (no1>no2){
			i = no2;
		}
		else{
			i = no1;
		}

		// checking from last which no divides the both nos and braking from there

		while (i>0){
			if (no1%i == 0 && no2%i == 0){
				break;
			}
			i--;
		}
		}

	printf("%d is the GCD of %d and %d",i,no1,no2);
	return 0;
}

