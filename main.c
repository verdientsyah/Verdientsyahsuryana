#include <stdio.h>

int main() {
    int n;

    // Memulai program
    printf("Masukkan nilai n: ");
    scanf("%d", &n);  // Input nilai n

    // Cek apakah n lebih besar dari 50
    if (n > 50) {
        n = n + 10;  // Jika ya, tambahkan 10 ke n
    } else {
        n = n - 25;  // Jika tidak, kurangi 25 dari n
    }

    // Tampilkan nilai n yang telah dimodifikasi
    printf("Nilai n setelah modifikasi: %d\n", n);

    return 0;  // Mengakhiri program
}

