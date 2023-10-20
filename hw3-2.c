#include <stdio.h>

// Function to calculate the minimum number of vehicles needed
int minVehiclesNeeded(int s[], int d[]) {
    // Sort the task orders by their departure times
    int n = 3;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (d[i] > d[j]) {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }

    int vehiclesNeeded = 1;
    int currentEndTime = d[0];

    for (int i = 1; i < n; i++) {
        if (s[i] < currentEndTime) {
            // If there's a conflict, a new vehicle is needed
            vehiclesNeeded++;
        } else {
            // No conflict, continue with the same vehicle
            currentEndTime = d[i];
        }

        // Check if either departure or return time is greater than 24
        if (s[i] == 24 || d[i] == 24) {
            vehiclesNeeded++;
        }
        else if (s[i] > 24 || d[i] > 24) {
            vehiclesNeeded++;
    }
    }

    return vehiclesNeeded;
}

int main() {
    int s[3], d[3];

    // Input: s1, d1, s2, d2, s3, d3 (departure and return times for three orders)
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &d[i], &s[i]);
    }

    // Calculate and print the minimum number of vehicles needed
    int vehiclesNeeded = minVehiclesNeeded(s, d);
    printf("%d\n", vehiclesNeeded);

    return 0;
}
