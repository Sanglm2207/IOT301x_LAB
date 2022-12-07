//
//  main.c
//  Lab12
//
//  Created by Lại Minh Sáng on 06/12/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Birthday {
    int day;
    int month;
};
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Birthday birthday;
};



void inputEmployee( struct Employee *emp) {
    printf("Nhap ten nhan vien: \n");
    scanf("%s", emp->name);
    printf("Nhap id nhan vien: \n");
    scanf("%d", &emp->id);
    printf("Nhap luong nhan vien: \n");
    scanf("%f", &emp->salary);
    
    printf("Nhap ngay sinh cua nhan vien: \n");
    scanf("%d", &emp->birthday.day);
    printf("Nhap thang sinh cua nhan vien: \n");
    scanf("%d", &emp->birthday.month);
};

typedef struct {
    int feet;
    int inch;
} distance_t;

void addDistance(distance_t dst1, distance_t dst2) {
    distance_t sum = {dst1.feet + dst2.feet, \
        dst1.inch + dst2.inch};
    printf("Tong cua hai khoang cach lan luot la: %d, %d \n", sum.feet, sum.inch);
    
}

typedef struct Student {
    char name[25];
    int age;
    char address[128];
    float gpa;
} Student;

void inputStudent( Student student1[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien: \n");
        scanf("%s", student1[i].name);
        
        printf("Nhap tuoi sinh vien: \n");
        scanf("%d", &student1[i].age);
        
        printf("Nhap dia chi sinh vien: \n");
        scanf("%s", student1[i].address);
        
        printf("Nhap diem gpa cua sinh vien: \n");
        scanf("%2f", &student1[i].gpa);
    }
}

void printStudent( Student student1[], int n)//ham xuat sinh vien
{
    printf(" Name \t Age \t Address \t GPA \n");
    for(int i=0; i<n ; i++)//vong lap for duyet sinh vien trong mang 0 den n-1
    {
        //hien thi cac sinh vien trong mang
        printf("%s \t %d \t %s \t %0.2f \n",  student1[i].name, student1[i].age, student1[i].address , student1[i].gpa);
    }
}

void searchStudent(Student student1[], int n){
    printf("Nhap ten hoc sinh can tim: ");
    char name[100];
    scanf("%s", name);
    bool flag = false;
    printf(" Name \t Age \t Address \t GPA \n");
    for(int i = 0; i< n; i++){
        if (strcmp(student1[i].name , name) == 0 ) {
            printf("%s \t %d \t %s \t %0.2f \n", student1[i].name, student1[i].age, student1[i].address , student1[i].gpa);
            flag = true;
            break;
        }
    }
    if (!flag) {
        printf("\nKhong tim thay ten hoc sinh %s nay !\n", name);
        printf("--------------------------------------------------------\n");
    }    
}

int main(int argc, const char * argv[]) {
    //--------------Bai 1 + 2--------------------------------------------
    //    struct Employee emp1;
    //    inputEmployee(&emp1);
    //    printf("Thong tin nhan vien %s id %d co thu nhap la %2f \n", emp1.name, emp1.id, emp1.salary);
    //    printf("Thong tin sinh nhat cua nhan vien: %d - %d \n", emp1.birthday.day, emp1.birthday.month);
    //--------------Bai 3------------------------------------------------
    //    distance_t distance1 = {03, 07};
    //    distance_t distance2 = {22, 99};
    //    addDistance(distance1, distance2);
    //--------------Bai 4------------------------------------------------
    int choose = 1, n = 0;
    printf("\nNhap so luong SV: "); scanf("%d", &n);
    
    Student student[n];
    
    while(choose != 0){
        system("cls");
        printf("******************************************\n");
        printf("**    CHUONG TRINH QUAN LY HOC SINH     **\n");
        printf("**      1. Nhap thong tin hoc sinh      **\n");
        printf("**      2. In danh sach hoc sinh        **\n");
        printf("**      3. Tim kiem hoc sinh            **\n");
        printf("**      0. Thoat                        **\n");
        printf("******************************************\n");
        printf("**       Nhap lua chon cua ban          **\n");
        scanf("%d",&choose);
        switch (choose) {
            case 1:
                printf("\n---------------Nhap thong tin hoc sinh-------------------\n");
                inputStudent(student, n);
                break;
            case 2:
                printf("\n---------------In danh sach hoc sinh---------------------\n");
                printStudent(student, n);
                break;
            case 3:
                printf("\n---------------Tim kiem hoc sinh-------------------------\n");
                searchStudent(student, n);
                break;
            default:
                break;
        }
    }
    
    return 0;
}
