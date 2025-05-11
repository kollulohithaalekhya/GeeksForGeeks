//{ Driver Code Starts
// Initial Template for C
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char ts[1001];
    fgets(ts, sizeof(ts), stdin);
    int t = atoi(ts);

    while (t--) {
        char *line = NULL;
        size_t len = 0;
        getline(&line, &len, stdin); // Removed ssize_t

        int *nums = (int *)malloc(1000000 * sizeof(int));
        int n = 0;
        char *token = strtok(line, " ");
        while (token != NULL) {
            nums[n++] = atoi(token);
            token = strtok(NULL, " ");
        }

        // Call user-defined function
        int result = getSecondLargest(nums, n);
        printf("%d\n", result);
        printf("%s\n", "~");
        free(nums);
        free(line);
    }

    return 0;
}

// } Driver Code Ends


int getSecondLargest(int *arr, int n) {
    // code here
    int largest = -1, secondLargest = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
