#include <stdio.h>
#include <math.h>

int main() {
    double bil, x, h;
    int iterasi = 0, bulat;

    do {
        printf("Masukkan bilangan (> 0) = ");
        scanf("%lf", &bil);
        if (bil <= 0) printf("Bilangan harus lebih besar dari 0!\n");
    } while (bil <= 0);           /* mencegah pembagian dengan nol */

    x = bil / 2;                  /* tebakan awal */
    printf("\nIterasi   Akar\n");
    do {
        h = x;                    /* simpan hasil sebelumnya */
        x = (x + bil / x) / 2;
        iterasi++;
        printf("%4d      %.4f\n", iterasi, x);
    } while (fabs(x - h) >= 0.00005);   /* berhenti jika 4 digit sama */

    printf("\nAkar dari %g = %.4f (%d iterasi)\n", bil, x, iterasi);

    /* bilangan cantik = akarnya bilangan bulat (kuadrat sempurna) */
    bulat = (int)(x + 0.5);
    if ((double)bulat * bulat == bil)
        printf("%g adalah bilangan cantik, akarnya bulat = %d\n", bil, bulat);
    else
        printf("%g bukan bilangan cantik (akarnya tidak bulat)\n", bil);
    return 0;
}
