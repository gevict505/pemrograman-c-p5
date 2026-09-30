#include <stdio.h>

int main() {
    int n, i;
    long long hasil;

    do {
        printf("Masukkan jumlah suku (1-60) = ");
        scanf("%d", &n);
    } while (n < 1 || n > 60);

    /* Deret 1 : 2, 4, 8, 16, 32, ... (pola 2^n) memakai for */
    printf("\nDeret 1 (2^n) : ");
    hasil = 1;
    for (i = 1; i <= n; i++) {
        hasil *= 2;
        printf("%lld", hasil);
        if (i < n) printf(", ");
    }

    /* Deret 2 : 1, 4, 9, 16, 25, ... (pola n^2) memakai while */
    printf("\nDeret 2 (n^2) : ");
    i = 1;
    while (i <= n) {
        printf("%lld", (long long)i * i);
        if (i < n) printf(", ");
        i++;
    }

    /* Deret 3 : 1, 8, 27, 64, 125, ... (pola n^3) memakai do-while */
    printf("\nDeret 3 (n^3) : ");
    i = 1;
    do {
        printf("%lld", (long long)i * i * i);
        if (i < n) printf(", ");
        i++;
    } while (i <= n);

    printf("\n");
    return 0;
}
