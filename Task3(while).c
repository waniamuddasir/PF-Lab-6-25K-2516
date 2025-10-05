#include <stdio.h>
int main(){
	int num, j, i = 1;
	printf("Enter an Odd number to make a pattern:\n");
	scanf("%d", &num);
	
	while (i <= num){
		j = 1;
		while (j <= num - i){
			printf(" ");
			j++;
		}
		j = 1;
		while (j <= 2 * i - 1){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	    
	i = num - 1;
	while (i >= 1){
		j = 1;
		while (j <= num - i){
			printf(" ");
			j++;
		}
		j = 1;
		while (j <= 2 * i - 1){
			printf("*");
			j++;
		}
		printf("\n");
		i--;
	}
	
	return 0;
}

