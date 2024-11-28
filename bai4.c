#include <stdio.h>

int main() {
    int n;

    // Yêu c?u ngu?i dùng nh?p s? ph?n t? c?a m?ng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // Khai báo m?ng v?i kích thu?c n
    int arr[n];

    // Nh?p các ph?n t? c?a m?ng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In các ph?n t? dã nh?p
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

