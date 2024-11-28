#include <stdio.h>

int main() {
    int arr[5];  // Khai báo m?ng s? nguyên có 5 ph?n t?

    // Nh?p các ph?n t? c?a m?ng
    printf("Nhap 5 phan tu cua mang:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In các ph?n t? c?a m?ng
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

