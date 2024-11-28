#include <stdio.h>

int main() {
    // Khai b�o v� g�n gi� tr? cho m?ng
    int arr[5] = {15, 3, 25, 7, 10};

    // Gi? s? ph?n t? d?u ti�n l� l?n nh?t v� nh? nh?t
    int max = arr[0];
    int min = arr[0];

    // Duy?t qua m?ng d? t�m ph?n t? l?n nh?t v� nh? nh?t
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

