#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum_positive = 0;
    int sum_negative = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            sum_positive += a[i];
        } else if (a[i] < 0) {
            sum_negative += a[i];
        } 
    }

    printf("%d %d", sum_positive, sum_negative);
    return 0;
}
