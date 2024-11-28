#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?ng
    int arr[5] = {15, 3, 25, 7, 10};

    // Gi? s? ph?n t? d?u tiên là l?n nh?t và nh? nh?t
    int max = arr[0];
    int min = arr[0];

    // Duy?t qua m?ng d? tìm ph?n t? l?n nh?t và nh? nh?t
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // In k?t qu?
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}

