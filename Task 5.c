#include <stdio.h>
int main(){
	int rows, i, j, c, a = 0, b = 1;
	printf("Enter number of Rows: ");
	scanf("%d", &rows);
	
	for (i = 1; i <= rows; i++){
		for (j = 1; j <= i; j++){
			printf("%d ", b);
			c = a + b;
			a = b;
			b = c;
		}
		printf("\n");
	}
	
	return 0;
}

