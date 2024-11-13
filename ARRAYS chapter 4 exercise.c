#include <stdio.h>
#include <time.h>   // To get the current time for random seed

#define MAX 10

int a[MAX];
int rand_seed;

// Function to generate a pseudo-random integer between 0 and 32767
int rand(void) {
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

// Function to perform bubble sort on the array 'a'
void bubble_sort() {
    int x, y, temp;
    for (x = 0; x < MAX - 1; x++) {
        for (y = 0; y < MAX - x - 1; y++) {
            if (a[y] > a[y + 1]) {
                temp = a[y];
                a[y] = a[y + 1];
                a[y + 1] = temp;
            }
        }
    }
}

int main(void) {
    // Initialize random seed with current time to get different values each run
    rand_seed = (int)time(NULL);

    // Fill the array with random values and print in a single line
    for (int i = 0; i < MAX; i++) a[i] = rand();

    // Print the unsorted array
    printf("Unsorted array:\n");
    for (int i = 0; i < MAX; i++) {
        printf("%d\n", a[i]);
    }

    // Sort the array using bubble sort
    bubble_sort();

    // Print the sorted array
    printf("--------------------\n");
    printf("Sorted array:\n");
    for (int i = 0; i < MAX; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
