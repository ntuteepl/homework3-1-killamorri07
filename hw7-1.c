#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#define ROWS 6
#define COLS 3
#define ARRAYSIZE 100

int main() {
    int data[ROWS][COLS] = {{123, 456, 9000}, {456, 789, 5000}, {789, 888, 6000},
                            {336, 558, 10000}, {775, 666, 12000}, {566, 221, 7000}};
    int n, id[ARRAYSIZE], pass[ARRAYSIZE];

    scanf("%d", &n);
    assert(n >= 1 && n < ARRAYSIZE);

    for (int i = 0; i < n; i++)
        scanf("%d%d", &id[i], &pass[i]);

    for (int i = 0; i < n; i++) {
        bool found = false;
        int (*data_ptr)[COLS] = data;  // Pointer to the first row of the 2D array

        for (int j = 0; j < ROWS; j++) {
            if (id[i] == *(*(data_ptr + j) + 0) && pass[i] == *(*(data_ptr + j) + 1) && !found) {
                printf("%d\n", *(*(data_ptr + j) + 2));
                found = true;
            }
        }

        if (!found)
            printf("error\n");
    }

    return 0;
}
