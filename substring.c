#include <stdio.h>
#include<string.h>

int main() {
    char mainString[100]; // The main string
    char subString[100];  // The substring to search for

    printf("Enter the main string: ");
    fgets(mainString, sizeof(mainString), stdin);

    printf("Enter the substring to search for: ");
    fgets(subString, sizeof(subString), stdin);

    // Remove newline characters from input strings
    mainString[strcspn(mainString, "\n")] = '\0';
    subString[strcspn(subString, "\n")] = '\0';

    int mainLen = strlen(mainString);
    int subLen = strlen(subString);

    int found = 0; // Flag to indicate whether the substring is found

    // Iterate through the main string
    for (int i = 0; i <= mainLen - subLen; i++) {
        int j;

        // Check if the current position in the main string matches the start of the substring
        for (j = 0; j < subLen; j++) {
            if (mainString[i + j] != subString[j]) {
                break; // If a mismatch is found, exit the inner loop
            }
        }

        // If the inner loop completed without a mismatch, the substring is found
        if (j == subLen) {
            printf("Substring found at index %d\n", i);
            found = 1; // Set the flag to indicate the substring is found
            break;
        }
    }

    if (!found) {
        printf("Substring not found\n");
    }

    return 0;
}

