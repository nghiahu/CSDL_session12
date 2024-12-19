#include <stdio.h>
#define MAX 100 

int main() {
    int n;
    int arr[MAX];
    int count[MAX] = {0};
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int found = 0; 
    printf("Cac phan tu lap lai:\n");
    for (int i = 0; i < n; i++) {
        if (count[arr[i]] > 1) {
            printf("Phan tu %d xuat hien %d lan.\n", arr[i], count[arr[i]]);
            found = 1;
            count[arr[i]] = 0; 
        }
    }

    if (!found) {
        printf("Khong co phan tu lap lai.\n");
    }

    return 0;
}
