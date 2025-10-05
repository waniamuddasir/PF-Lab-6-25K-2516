#include <stdio.h>
int main (){
	int num, digit, count = 0, sum = 0;
	printf("Enter the Number: ");
	scanf("%d", &num);
	
	int temp = num;
	
	do {
		digit = temp % 10;
		temp = temp / 10;
	    count++;
	    if (count % 2 != 0){
	    	sum = sum + count;
		}
	} while (temp != 0);
	
	printf("The sum of digits in Odd position is: %d", sum);
	
	return 0;
}
