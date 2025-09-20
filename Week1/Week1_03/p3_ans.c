#include <stdio.h>

int main() {
    long long n, m;
    while (scanf("%lld %lld", &n, &m) != EOF) {
        long long cn1 = 1;
        int i;
        for (i = 0; cn1 < n && m > 1; i++) {
            cn1 *= m;
        }
        if (cn1 != n || m <= 1) {
            printf("Boring!\n");
        } else {
            while (cn1 > 0) {
                printf("%lld", cn1);
                if (cn1 != 1) {
                    printf(" ");
                } else {
                    printf("\n");
                }
                cn1 /= m;
            }
        }
    }
    return 0;
}