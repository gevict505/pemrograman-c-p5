#include <stdio.h>

int main() {
    int baris, kolom, i, j, k;
    long long hasil;

    printf("Masukkan jumlah baris = ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom = ");
    scanf("%d", &kolom);
    printf("\n");

    for (i = 1; i <= baris; i++) {
        for (j = 1; j <= kolom; j++) {
            hasil = 1;
            for (k = 1; k <= i; k++) {
                hasil *= j;          /* hasil = j pangkat i */
            }
            printf("%6lld", hasil);
        }
        printf("\n");
    }
    return 0;
}
