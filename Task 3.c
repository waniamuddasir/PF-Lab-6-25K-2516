#include <stdio.h>
int main (){
	int rows, i, j = 1;
	printf("Enter the number of rows (Odd ONLY): ");
	scanf("%d", &rows);
	
	if (rows % 2 == 0){
		printf("Invalid number of rows\n");
	} else {
			while (j <= rows){
				for (i = 1; i <= rows - j; i++){
 					printf(" ");
				}
				for (i = 1; i <= 2 * j - 1; i++){
		 			printf("*");
				}
				printf("\n");
				j++;
			}
			
			int z = rows - 1;
			while(z >= 1){
					for(i = 1; i <= rows - z; i++){
						printf(" ");
					}
					for (i = 1; i <= 2 * z - 1; i++){
						printf("*");
					}
					printf("\n");
					z--;
				}
		}
	return 0;
}
