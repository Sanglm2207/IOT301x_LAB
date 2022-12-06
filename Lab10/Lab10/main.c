//
//  main.c
//  Lab10
//
//  Created by Lại Minh Sáng on 02/11/2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //-------------------Bài 1----------------------------//
//    int a = 10;
//    float b = 3.141592;
//    char c = 'a';
//
//    int *aPtr = &a;
//    float *bPtr = &b;
//    char *cPtr = &c;
//
//    printf("\nGiá trị của con trỏ aPtr là = %d\n", *aPtr);
//    printf("\nĐịa chỉ của con trỏ aPtr là = %p\n", &aPtr);
//
//    printf("\nGiá trị của con trỏ bPtr là = %f\n", *bPtr);
//    printf("\nĐịa chỉ của con trỏ bPtr là = %p\n", &bPtr);
//
//    printf("\nGiá trị của con trỏ cPtr là = %x\n", *cPtr);
//    printf("\nĐịa chỉ của con trỏ cPtr là = %p\n", &cPtr);
    //----------------------------------------------------//
    
//    *ptr là giá trị mà con trỏ trỏ tới
//    ptr là địa chỉ của biến mà con trỏ đang trỏ tới 
//    &ptr là địa chỉ của ptr
    

    //-------------------Bài 2------------------------------//
//    int a = 51;
//    int b = 99;
//    int *ptr = &a;
//    ptr = &b;
//    printf("\nGiá trị của con trỏ ptr là = %d\n", *ptr);
//    printf("\nĐịa chỉ của con trỏ ptr là = %p\n", &ptr);
    //---------------------------------------------------------//
    
    //---------------------Bài 3-------------------------------//
//    int num1=0, num2=0;
//    int *pnum1 = &num1;
//    int *pnum2 = &num2;
//
//    printf("Input a number: 1\n");
//    scanf("%d", pnum1);
//    printf("Input a number 2: \n");
//    scanf("%d", pnum2);
//
//    if(*pnum1 > *pnum2) {
//        printf("\nSo %d la so lon nhat trong 2 so\n", *pnum1);
//    } else if (*pnum1 < *pnum2) {
//        printf("\nSo %d la so lon nhat trong 2 so \n", *pnum2);
//    } else {
//        printf("\nHai so bang nhau\n");
//    }
    //---------------------------------------------------------//
    
    //--------------------Bai 4--------------------------------//
//    int num1=0, num2=0;
//    int *pnum1 = &num1;
//    int *pnum2 = &num2;
//    printf("Input a number: 1\n");
//    scanf("%d", pnum1);
//    printf("Input a number 2: \n");
//    scanf("%d", pnum2);
//    printf("\nTong cua 2 so la %d \n", (*pnum1) + (*pnum2));
    //---------------------------------------------------------//
    
    //--------------------Bai 5--------------------------------//
    int num1=0, num2=0;
    int *pnum1 = &num1;
    int *pnum2 = &num2;
    printf("Input a number 1:\n");
    scanf("%d", pnum1);
    printf("Input a number 2: \n");
    scanf("%d", pnum2);
    
    int temp;
    temp = *pnum1;
    *pnum1= *pnum2;
    *pnum2=temp;
    
    printf("\n-----Sau khi trao doi-----");
    printf("\nSo thu nhat: %d\n", *pnum1);
    printf("\nSo thu hai: %d\n", *pnum2);
    //---------------------------------------------------------//
    return 0;
}


