#include <stdio.h>

int main() {
    // Khai b�o v� g�n gi� tr? cho m?ng
    int arr[5] = {1, 2, 3, 4, 5};
    int hasEven = 0;  // Bi?n ki?m tra c� s? ch?n hay kh�ng

    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            hasEven = 1;  // G�n c? n?u c� �t nh?t m?t s? ch?n
        }
    }

    // N?u kh�ng c� s? ch?n, in th�ng b�o
    if (!hasEven) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}

