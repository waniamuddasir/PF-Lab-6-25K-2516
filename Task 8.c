#include <stdio.h>
int main (){
	int num, temp, digit, sum = 0;
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	temp = num;
	
	while (temp != 0){
		digit =  temp % 10;
		sum = sum + (digit * digit * digit);
		temp = temp / 10;
	}
	if (sum == num){
		printf("It is an Armstrong Number\n");
	} else {
		printf("It is not an Armstrong Number\n");
	}
	return 0;
}
