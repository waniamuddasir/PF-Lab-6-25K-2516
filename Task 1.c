#include <stdio.h>
int main(){
	int num;
	int factorial = 1;
	printf("Enter a Number: \n");
	scanf("%d", &num);
	int i = 1;
	
	if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
	
	printf("The factorial of number %d is ", num);
	for (i = num; i >= 1; i--){
		printf("%d", i);
		if (i > 1){
			printf("*");
		}
		factorial = factorial * i;
	}
	printf(" = %d\n", factorial);
	return 0;
}

