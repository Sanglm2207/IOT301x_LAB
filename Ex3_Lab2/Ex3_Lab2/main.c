//
//  main.c
//  Ex3_Lab2
//
//  Created by Lại Minh Sáng on 01/10/2022.
//

#include <stdio.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    char name[32];                      // Tao 1 bien  mang kieu char kich thuoc 32 phan tu
    printf("What's your name? ");                   // Hien thi ra man hinh
    scanf("%s", name);                              // Nhan du lieu tu ban phim
    printf("Hello %s. How are you? \n", name);      //Hien thi ra man hinh
    return 0;
}
