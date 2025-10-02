#include <stdio.h>

#define MAXN 1000   // maximum size for array

void square(int n, int store[MAXN][MAXN], int count1, int count2) {
    if (n == 0) {
        return;
    }

    for (int i = count1; i < count2; i++) {
        if (i == count1 || i == (count2 - 1)) {
            for (int j = count1; j < count2; j++) {
                store[i][j] = n;
            }
        } else {
            for (int j = count1; j < count2; j++) {
                if (j == count1 || j == (count2 - 1)) {
                    store[i][j] = n;
                }
            }
        }
    }

    count1++;
    count2--;
    square(n - 1, store, count1, count2);
}

void squarei(int n, int store[MAXN][MAXN], int count1, int count2) {
    for (int i = count1; i < count2; i++) {
        if (i == count1 || i == (count2 - 1)) {
            for (int j = count1; j < (n * 2) - 1; j++) {
                store[i][j] = n;
            }
        } else {
            for (int j = count1; j < count2; j++) {
                if (j == count1 || j == (count2 - 1)) {
                    store[i][j] = n;
                }
            }
        }
    }

    count1++;
    count2--;
    square(n - 1, store, count1, count2);
}

int main() {
    int n, count1 = 0;
    scanf("%d", &n);

    int count2 = (n * 2) - 1;
    int store[MAXN][MAXN] = {0};   // fixed-size 1000x1000 array

    squarei(n, store, count1, count2);
    store[n - 1][n - 1] = 1;

    for (int i = 0; i < (n * 2) - 1; i++) {
        for (int j = 0; j < (n * 2) - 1; j++) {
            printf("%d ", store[i][j]);
        }
        printf("\n");
    }

    return 0;
}
