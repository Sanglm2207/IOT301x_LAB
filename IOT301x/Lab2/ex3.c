/*
* This is Lab No. 2, created by Lai Minh Sang
* Date of creation: 22/09/2022
* Date of modified: 22/09/2022
* Goal of this project: Viết chương trình nhập tên của bạn rồi hiển thị trên màn hình với câu chào: Hello [name]. How are you?
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[32];                                  // Tao 1 bien  mang kieu char kich thuoc 32 phan tu
    printf("What's your name? ");                   // Hien thi ra man hinh
    scanf("%s", name);                              // Nhan du lieu tu ban phim
    printf("Hello %s. How are you? \n", name);      //Hien thi ra man hinh      
    return 0;
}