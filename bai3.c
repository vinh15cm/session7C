#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?ng
    int arr[5] = {1, 2, 3, 4, 5};
    int hasEven = 0;  // Bi?n ki?m tra có s? ch?n hay không

    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            hasEven = 1;  // Gán c? n?u có ít nh?t m?t s? ch?n
        }
    }

    // N?u không có s? ch?n, in thông báo
    if (!hasEven) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}

