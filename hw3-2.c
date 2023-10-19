#include <stdio.h>

int checkOverlap(int h1, int h2, int h3, int h4, int h5, int h6) {
    // Check if 1, 3, and 5 do not overlap
    if ((h1 <= h3 && h3 <= h2) || (h1 <= h5 && h5 <= h2) || (h3 <= h1 && h1 <= h4) || (h3 <= h5 && h5 <= h4) || (h5 <= h1 && h1 <= h6) || (h5 <= h3 && h3 <= h6)) {
        return 0; // Overlapping inputs
    }

    return 1; // No overlap
}

int main() {
    int h1, h2, h3, h4, h5, h6;

    printf("Enter 6 hour values: ");
    scanf("%d %d %d %d %d %d", &h1, &h2, &h3, &h4, &h5, &h6);

    if (checkOverlap(h1, h2, h3, h4, h5, h6)) {
        printf("Inputs do not overlap.\n");
    } else {
        printf("Invalid input: Overlapping hours.\n");
    }

    return 0;
}
