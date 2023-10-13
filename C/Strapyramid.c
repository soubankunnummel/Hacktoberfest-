#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // You can change this value to adjust the number of rows.

    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
