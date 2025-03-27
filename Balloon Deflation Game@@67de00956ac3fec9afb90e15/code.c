#include <stdio.h>
#include <stdlib.h>

// Comparator function for sorting
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); // Ascending order sort
}

int main() {
    int n;
    scanf("%d", &n);  // Read the number of balloons

    int balloons[n];
    
    // Read the air values into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &balloons[i]);
    }

    // Sort the array in ascending order
    qsort(balloons, n, sizeof(int), compare);

    // Print count of remaining balloons at each unique positive value
    int remaining = n;
    printf("%d\n", remaining); // First print the total count

    for (int i = 1; i < n; i++) {
        if (balloons[i] != balloons[i - 1]) { // Print only when value changes
            remaining = n - i;
            printf("%d\n", remaining);
        }
    }

    return 0;
}
