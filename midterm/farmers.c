#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T > 0) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
 
        int newDays = (M1 * D) / (M1 + M2);
        int fewerDays = D - newDays;

        printf("%d\n", fewerDays);

        T--;
    }

    return 0;
}
