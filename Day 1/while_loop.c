#include <stdio.h>

int main() {
    // This program prints multiples of ten from 0 to 1000 using a while loop
    int count = 0;   // Initializing count to 0
    while (count <= 1000) {
        printf("%d\t", count);
        count += 10;
    }

    return 0;   // Return 0 to indicate successful completion
}
