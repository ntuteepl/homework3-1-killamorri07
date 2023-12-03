#include <stdio.h>

// Function to calculate the minimum number of vehicles needed
int minVehiclesNeeded(int s[], int d[], int n) {
    int vehiclesNeeded = 0;
    int currentEndTime = 0;

    for (int i = 0; i < n; i++) {
        if (d[i] > 24) {
            // Reject orders that have a return time greater than 24
            return -1;
        }

        if (s[i] > currentEndTime) {
            // If the order can start after the current driver's end time, assign it to the current driver.
            currentEndTime = d[i];
        } else if (d[i] <= currentEndTime) {
            // If the order can be finished before or at the same time as the current driver's end time, do nothing.
            continue;
        } else {
            // If the order starts before the current driver's end time but ends after, assign it to a new driver.
            vehiclesNeeded++;
            currentEndTime = d[i];
        }
    }

    return vehiclesNeeded + 1; // Add 1 for the first driver
}

int main() {
    int n = 3; // Number of orders
    int s[3], d[3];

    // Input: s1, d1, s2, d2, s3, d3 (departure and return times for three orders)
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &s[i], &d[i]);
    }

    // Calculate and print the minimum number of vehicles needed
    int vehiclesNeeded = minVehiclesNeeded(s, d, n);

    if (vehiclesNeeded != -1) {
        printf("%d\n", vehiclesNeeded);
    } else {
        printf("Cannot accommodate all orders.\n");
    }

    return 0;
}
