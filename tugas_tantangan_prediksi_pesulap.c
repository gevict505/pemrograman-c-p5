#include <stdio.h>

int main() {
    int i, bil, total = 0;

    printf("PREDIKSI PESULAP MERAH\n\n");
    for (i = 1; i <= 5; i++) {
        if (i == 4) {
            printf("\nTULIS DIPAPAN PREDIKSI ANDA...\n\n");
        }
        do {
            switch (i) {
                case 1: printf("Masukkan bilangan pertama : "); break;
                case 2: printf("Masukkan bilangan kedua   : "); break;
                case 3: printf("Masukkan bilangan ketiga  : "); break;
                case 4: printf("Masukkan bilangan keempat : "); break;
                case 5: printf("Masukkan bilangan kelima  : "); break;
            }
            scanf("%d", &bil);
        } while (bil < 100 || bil > 999);   /* wajib bilangan ratusan */
        total += bil;
    }

    printf("\nKomputer akan menebak bilangan ANDA!\n");
    printf("\nTekan [Enter]");
    while (getchar() != '\n');
    getchar();

    printf("\n======================\n");
    printf(" MENURUT PENERAWANGAN\n");
    printf(" PREDIKSI ANDA = %d\n", total);
    printf("======================\n");
    return 0;
}
