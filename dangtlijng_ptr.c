#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*)malloc(sizeof(int)); // Allocate memory
    if (ptr != NULL) {
        *ptr = 42; // Assign a value to the allocated memory
	printf("%p\n",ptr);	

        free(ptr); // Deallocate the memory

        // Now, 'ptr' is a dangling pointer since it still contains the address
        // of the deallocated memory, but that memory is no longer valid.

        printf("Dereferencing the dangling pointer: %d\n", *ptr); // Undefined behavior
	printf("%p\n",ptr);	

     }

    return 0;
}

