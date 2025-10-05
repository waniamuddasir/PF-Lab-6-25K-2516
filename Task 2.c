#include <stdio.h>
int main(){
	int num, sum = 0, digit, rev = 0;
	printf("Enter a 5 digit number: ");
	scanf("%d", &num);
	
	int temp = num;
	do {
		digit = temp % 10;
		sum = sum + digit;
		temp = temp / 10;
	} while (temp != 0);
	
	if (sum % 2 == 0){
		if (num % num == 0){
			printf("It is a Prime Number\n");
		} else {
			printf("It is not a Prime Number\n");
		}
	} else {
		temp = num;
		while (temp !=0){
			digit = temp % 10;
			sum = sum + digit;
			rev = rev * 10 + digit;
			temp = temp / 10;
		}
		if (num == rev)
            printf("It is Palindrome\n");
        else
            printf("It is Not Palindrome\n");
	}
	return 0;
}

