#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?ng
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);  // Tính d? dài m?ng

    // In các ph?n t? c?a m?ng
    printf("Cac phan tu cua mang:\n");
    for (int i = 0; i < length; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // In d? dài m?ng
    printf("Do dai cua mang: %d\n", length);

    return 0;
}

