#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?ng
    int arr[5] = {1, 2, 3, 4, 5};

    // Thay d?i giá tr? các ph?n t? c?a m?ng
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] += 3;  // S? ch?n tang 3 don v?
        } else {
            arr[i] += 2;  // S? l? tang 2 don v?
        }
    }

    // In m?ng sau khi thay d?i
    printf("Mang sau khi thay doi la:\n");
    printf("[");
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) printf(", ");
    }
    printf("]\n");

    return 0;
}

