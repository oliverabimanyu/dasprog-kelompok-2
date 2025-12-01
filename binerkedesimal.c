#include <stdio.h>

void binerkedesimal() {
    char biner[64];
    long long hasil = 0;

    printf("Masukkan bilangan biner: ");
    scanf("%s", biner);

    for (int i = 0; biner[i] != '\0'; i++) {
        if (biner[i] == '0' || biner[i] == '1') {
            hasil = hasil * 2 + (biner[i] - '0');
        } else {
            printf("Input tidak valid.\n");
            return;
        }
    }

    printf("Desimal: %lld\n", hasil);
}

int main() {
    binerkedesimal();
    return 0;
}
