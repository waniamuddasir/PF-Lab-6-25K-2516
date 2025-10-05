#include <stdio.h>

int main() {
    int rows, i = 1, j, count;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    while (i <= rows) {
        count = 1;

        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            if (j <= i) {
                printf("%d", count);
                count++;
            } else {
                count--;
                printf("%d", count - 1);
            }
        }

        printf("\n");
        i++;
    }

    return 0;
}

