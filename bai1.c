#include <stdio.h>

int main() {
    // Khai b�o v� g�n gi� tr? cho m?ng
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);  // T�nh d? d�i m?ng

    // In c�c ph?n t? c?a m?ng
    printf("Cac phan tu cua mang:\n");
    for (int i = 0; i < length; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // In d? d�i m?ng
    printf("Do dai cua mang: %d\n", length);

    return 0;
}

