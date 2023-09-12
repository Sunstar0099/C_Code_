#include <stdio.h>

unsigned int swapNibbles(unsigned int num) {
    // Right-shift the MSBs to the LSBs and left-shift the LSBs to the MSBs.
    return ((num & 0x0F) << 4) | ((num & 0xF0) >> 4);
}

int main() {
    unsigned int num;
    printf("Enter an integer (0-255): ");
    scanf("%u", &num);

    if (num >= 0 && num <= 255) {
        unsigned int swapped = swapNibbles(num);
        printf("Original: %u\n", num);
        printf("Swapped: %u\n", swapped);
    } else {
        printf("Invalid input. Please enter an integer between 0 and 255.\n");
    }

    return 0;
}

