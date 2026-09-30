#include <stdio.h>

int main() {
    int baris, kolom, i, j;

    printf("Masukkan jumlah baris = ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom = ");
    scanf("%d", &kolom);
    printf("\n");

    /* loop luar = baris, loop dalam = kolom */
    for (i = 1; i <= baris; i++) {
        for (j = 1; j <= kolom; j++) {
            printf("%-4d", j);
        }
        printf("\n");
    }
    return 0;
}
