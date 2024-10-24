#include <stdio.h>

int main() {
    int angka;

    // Menginput nilai bilangan bulat positif
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &angka);

    // Memastikan bilangan yang dimasukkan positif
    if (angka < 0) {
        printf("Harap masukkan bilangan bulat positif!\n");
        return 1;
    }

    // Mengecek apakah bilangan ganjil atau genap
    if (angka % 2 == 0) {
        printf("GENAP\n");
    } else {
        printf("GANJIL\n");
    }

    return 0;
}

