#include <stdio.h>

int main() {
    // Iterate over rows
    for (int i = 0; i <= 9; i++) {
        // Iterate over columns
        for (int j = 0; j <= 9; j++) {
            // Calculate the value for each cell
            int value = i * j;
            
            // Print the value
            printf("%d", value);
            
            // Print comma and space if not last column
            if (j != 9) {
                printf(", ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
