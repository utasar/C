#include <stdio.h>
#include <stdlib.h>

int main() {
    const int ROWS = 2;
    const int COLS = 3;
    int *matrix_ptr = NULL;

    // Allocate memory for 2 * 3 = 6 integers
    matrix_ptr = (int *)malloc(ROWS * COLS * sizeof(int));
    if (matrix_ptr == NULL) return 1;

    // Fill the simulated array (just for demonstration)
    for (int i = 0; i < ROWS * COLS; i++) {
        *(matrix_ptr + i) = i + 10;
    }
    // Elements: 10, 11, 12, 13, 14, 15

    // Access element at [1][2]
    int row = 1;
    int col = 2;
    int index = row * COLS + col; // 1 * 3 + 2 = 5

    int value = *(matrix_ptr + index);

    printf("Simulated 2x3 Array:\n");
    printf("Value at index [%d][%d] (offset %d): %d\n", row, col, index, value);
    // Should print the 6th element (value 15, which is index 5)

    free(matrix_ptr);
    return 0;
}
