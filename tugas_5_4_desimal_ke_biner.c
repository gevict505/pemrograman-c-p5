#include <stdio.h>

int main() {
    int bil, hasil, sisa, banyak = 0, i;
    int biner[32];

    do {
        printf("Masukkan bilangan desimal (>= 0) = ");
        scanf("%d", &bil);
    } while (bil < 0);

    printf("\nPembagian berulang:\n");
    hasil = bil;
    do {
        sisa = hasil % 2;
        printf("%d / 2 = %d sisa %d\n", hasil, hasil / 2, sisa);
        biner[banyak] = sisa;      /* simpan sisa satu per satu */
        banyak++;
        hasil = hasil / 2;
    } while (hasil > 0);

    printf("\nSisa dibaca dari bawah ke atas.\n");
    printf("Hasil: ");
    for (i = banyak - 1; i >= 0; i--) {
        printf("%d", biner[i]);
    }
    printf(" (basis 2)\n");
    return 0;
}
