#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);  // Sorting in ascending order
}

int main() {
    int n;
    scanf("%d", &n);  // Read number of balloons

    int balloons[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &balloons[i]);  // Read balloon air values
    }

    // Sort the array
    qsort(balloons, n, sizeof(int), compare);

    // Print count of remaining balloons at each round
    int remaining = n;
    for (int i = 0; i < n; i++) {
        if (balloons[i] > 0) {  // Only print if a new positive value is found
            printf("%d\n", remaining);
            remaining = n - (i + 1);
        }
    }

    return 0;
}
