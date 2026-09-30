# Pemrograman C – Praktikum 5: Statement Perulangan (Looping)

Kumpulan program tugas Praktikum 5 (Pemrograman) – Teknik Komputer, PENS.
Topik: `for`, `while`, `do-while`, nested loop, `break`, dan `continue`.

| File | Tugas | Ringkasan |
|---|---|---|
| `tugas_5_1_matriks_berulang.c` | 5.1 | Matriks baris x kolom, tiap baris berisi 1..kolom (nested for) |
| `tugas_5_2_pangkat_matriks.c` | 5.2 | Matriks pangkat (elemen baris i, kolom j = j^i) |
| `tugas_5_3_deret_bilangan.c` | 5.3 | Deret 2^n, n^2, n^3 memakai for, while, do-while |
| `tugas_5_4_desimal_ke_biner.c` | 5.4 | Konversi desimal ke biner dengan pembagian berulang |
| `tugas_5_5_bilangan_prima.c` | 5.5 | Deret prima, banyak prima, dan jumlahnya (break + continue) |
| `tugas_5_6_akar_kuadrat.c` | 5.6 | Akar kuadrat dengan iterasi, hasil 4 digit desimal |
| `tugas_tantangan_prediksi_pesulap.c` | Tantangan | Prediksi Pesulap Merah |

## Cara compile dan jalankan

```bash
gcc tugas_5_1_matriks_berulang.c -o tugas_5_1
./tugas_5_1
```

Khusus tugas 5.6 tambahkan `-lm` (library math):

```bash
gcc tugas_5_6_akar_kuadrat.c -o tugas_5_6 -lm
```

Di Windows (MinGW), jalankan dengan `tugas_5_1.exe`.
