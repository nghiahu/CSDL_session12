#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50]; 
    int point;     
} Student;

void initialize(Student* student) {
    strcpy(student->name, "");
    student->point = 0;      
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    Student studentArray[n]; 
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien %d: ", i + 1);
        scanf("%s", studentArray[i].name);
        printf("Nhap diem sinh vien %d: ", i + 1);
        scanf("%d", &studentArray[i].point);
    }
    char searchName[50];
    printf("Nhap ten sinh vien de tim kiem: ");
    scanf("%s", searchName);
    int found = 0; 
    for (int i = 0; i < n; i++) {
        if (strcmp(studentArray[i].name, searchName) == 0) {
            printf("Diem cua sinh vien %s la: %d\n", studentArray[i].name, studentArray[i].point);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien.\n");
    }

    return 0;
}
