#include <stdio.h>
int main(){
	int num, temp, digit, rev = 0, count;
	printf("Enter a Number: ");
	scanf("%d", &num);
	
	temp = num;
	
	do {
		digit = temp % 10;
		rev = rev * 10 + digit;
		temp = temp / 10;
		count++;
	} while (temp != 0);
	
	printf("\nThe number of Digits is: %d\n", count);
	
	int i = 1;
	do {
		digit = rev % 10;
		printf("Digit %d: %d\n", i, digit);
		rev = rev / 10;
		i++;
	} while (rev != 0);
	return 0;
}

