#include <stdio.h>

int main() {
    long long n, maks, total = 0;
    int i, prima, banyak = 0;

    printf("Masukkan nilai maksimum = ");
    scanf("%lld", &maks);

    printf("Deret bilangan prima: ");
    for (n = 2; n <= maks; n++) {
        if (n > 2 && n % 2 == 0) {
            continue;                        /* genap > 2 pasti bukan prima */
        }
        prima = 1;
        for (i = 2; i <= n / i; i++) {      /* cukup sampai akar n */
            if (n % i == 0) {
                prima = 0;
                break;                       /* sudah pasti bukan prima */
            }
        }
        if (prima) {
            if (banyak > 0) printf(", ");
            printf("%lld", n);
            banyak++;
            total += n;
        }
    }

    printf("\nJumlah bilangan prima = %d\n", banyak);
    printf("Jumlah seluruh bilangan prima = %lld\n", total);
    return 0;
}
