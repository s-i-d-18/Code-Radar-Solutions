void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    // Step 1: Create a new array for unique ranks
    int uniqueRanks[20000];
    int uniqueCount = 0;

    // Get unique scores from ranked
    for (int i = 0; i < n; i++) {
        if (i == 0 || ranked[i] != ranked[i - 1]) {
            uniqueRanks[uniqueCount++] = ranked[i];
        }
    }

    // Step 2: Determine ranks for each player score
    int rankIndex = uniqueCount - 1;

    for (int i = 0; i < m; i++) {
        while (rankIndex >= 0 && player[i] >= uniqueRanks[rankIndex]) {
            rankIndex--;
        }
        // Rank is index + 2 because we start counting ranks from 1
        result[i] = rankIndex + 2;
    }
}