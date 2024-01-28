#include <stdio.h>

int main() {
    int n, num;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap so num: ");
    scanf("%d", &num);

    int a[n]; // Khai báo mảng a[] sau khi biết số lượng phần tử n
    printf("Nhap phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Mang vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Cap phan tu co tong bang %d: ", num);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == num) {
                printf("(%d, %d) ", i, j);
            }
        }
    }
    return 0;
}
