#include <stdio.h>
#include <string.h>

// Fungsi untuk konversi desimal ke basis lain
void konversiBilangan(int bilangan, int basis) {
    char hasil[100]; // Array untuk menyimpan hasil
    int index = 0;
    int sisa;
    
    // Handle kasus bilangan 0
    if (bilangan == 0) {
        printf("Hasil konversi: 0\n");
        return;
    }
    
    // Proses konversi
    while (bilangan > 0) {
        sisa = bilangan % basis;
        bilangan = bilangan / basis;
        
        // Konversi sisa ke karakter
        if (sisa < 10) {
            hasil[index] = sisa + '0'; // Angka 0-9
        } else {
            hasil[index] = sisa - 10 + 'A'; // Huruf A-F untuk basis > 10
        }
        index++;
    }
    
    hasil[index] = '\0'; // Akhiri string
    
    // Balik string karena hasil konversi dibaca dari bawah ke atas
    printf("Hasil konversi: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hasil[i]);
    }
    printf("\n");
}

int main() {
    int bilangan, basis;
    
    printf("=== PROGRAM KONVERSI BILANGAN DESIMAL ===\n");
    
    // Input bilangan dari user
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &bilangan);
    
    // Input basis tujuan
    printf("Masukkan basis tujuan (2-16): ");
    scanf("%d", &basis);
    
    // Validasi input
    if (basis < 2 || basis > 16) {
        printf("Error: Basis harus antara 2 sampai 16!\n");
        return 1;
    }
    
    if (bilangan < 0) {
        printf("Error: Masukkan bilangan positif!\n");
        return 1;
    }
    
    // Tampilkan hasil
    printf("\n--- HASIL KONVERSI ---\n");
    printf("Bilangan desimal: %d\n", bilangan);
    printf("Basis tujuan: %d\n", basis);
    
    konversiBilangan(bilangan, basis);
    
    return 0;
}