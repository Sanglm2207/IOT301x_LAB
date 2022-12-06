//
//  main.c
//  Lab11
//
//  Created by Lại Minh Sáng on 15/11/2022.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define lengthof(arr) sizeof(arr)/sizeof(*arr)
/*
 * Ham tinh do dai cua mang boi su sung con tro
 *
 * chuoi trong c duoc luu tru lien tuc trong bo nho
 * va ket thuc boi null ('\0')
 * do vay ta se tro con tro ptr vao o nho tiep theo cho den gia tri null
 */

int string_length(char *pointer) /* p=&str[0] */
{
    int count = 0;
    
    while( *(pointer + count) != '\0' )
        count++;
    
    return count;
}

void string_reverse(char *string)
{
    int length, i;
    char *begin, *end, temp;
    
    length = string_length(string);
    
    begin = string;
    end = string;
    
    for ( i = 0 ; i < ( length - 1 ) ; i++ )
        end++;
    
    for ( i = 0 ; i < length/2 ; i++ )
    {
        temp = *end;
        *end = *begin;
        *begin = temp;
        
        begin++;
        end--;
    }
}

int compare(char s1[],char s2[]) {
    int i = 0;
    char *ptr1 = s1;
    char *ptr2 = s2;
    bool isEquals = false;
    
    while (*(ptr1+i) == *(ptr2+i) &&
           *(ptr1+i) != '\0' &&
           *(ptr2+i) != '\0') {
        ++i;
    }
    
    if (*(ptr1+i) == '\0' && *(ptr2+i) == '\0') {
        isEquals = true;
    } else {
        isEquals = false;
    }
    
    return isEquals;
}

void search(int *x, int *y) {
    int i, f=0;
    for (i = 0; i < 5; i++) {
        if (*(x + i) == *y) {
            f = 1;
            break;
        } else {
            continue;
        }
    }
    if (f == 1) {
        printf("Da tim thay. \n");
    } else {
        printf("Khong tim thay. \n");
    }
}

//Ham tinh tong
int add (int *pnum1, int *pnum2){
    return (*pnum1 + *pnum2);
}

int main(int argc, const char * argv[]) {
    
    //------------------------------Bai 1-------------------------------------
    //    char a[256], *ptr;    /*Khai báo chuỗi và con trỏ chuỗi */
    //    ptr = a;     /*Gán địa chỉ chuỗi vào con trỏ*/
    //    int length, i;
    //
    //    printf(">>Nhap chuoi: ");
    //    scanf("%s",ptr);
    //
    //    length = string_length(ptr);
    //    printf("\nDo dai chuoi %s la: %d \n", ptr, length);
    //
    //    string_reverse(ptr);
    //    printf("Chuoi dao nguoc la \"%s\".\n", ptr);
    //------------------------------------------------------------------------
    
    //------------------------------Bai 2-------------------------------------
    //    printf("%d\n", compare("Hello Daika", "Hello Daika"));
    //------------------------------------------------------------------------
    
    //------------------------------Bai 3-------------------------------------
    //    int arr[5];
    //    int i;
    //    int sum = 0;
    //    int *ptr;
    //
    //    printf("\nNhap 5 phan tu: \n");
    //    for (i = 0; i < 5; i++) {
    //        printf("Nhap a[%d] = ", i + 1);
    //        scanf("%d", &arr[i]);
    //    }
    //    ptr = arr; // gan dia chi o nho dau tien cua mang arr cho ptr = &arr[0]
    //
    //    int max = *ptr;
    //    for (i=0; i < 5; i++) {
    //        if (max < *(ptr + i)) {
    //            max = *(ptr + i);
    //        }
    //    }
    //    printf("Số lớn nhất trong mảng là: %d\n", max);
    //------------------------------------------------------------------------
    
    //------------------------------Bai 4-------------------------------------
    //    int arr[5];
    //    int i;
    //    int *x;
    //    int *y = malloc(sizeof(int));
    //
    //    printf("\nNhap 5 phan tu: \n");
    //    for (i = 0; i < 5; i++) {
    //        printf("Nhap a[%d] = ", i + 1);
    //        scanf("%d", &arr[i]);
    //    }
    //    x = arr;
    //    printf("enter the element to be searched:");
    //    scanf("%d", y);
    //    search(x, y);
    //------------------------------------------------------------------------
    
    //------------------------------Bai 5-------------------------------------
    //    int arr1[] = {3,10,34,23,43,12};
    //    int arr2[] = {4,6,8};
    //    int *ptr1, *ptr2;
    //    int temp;
    //
    //    ptr1 = arr1;
    //    ptr2 = arr2;
    //
    //    for (int i = 0; i < lengthof(arr2); i++) {
    //        temp = *(ptr2 + i);
    //        *(ptr2 + i) = *(ptr1 + i);
    //        *(ptr1 + i) = temp;
    //    }
    //    printf("Mang arr1 sau khi hoan doi la: ");
    //    for (int i = 0; i < lengthof(arr1); ++i) {
    //        printf("%d, ", ptr1[i]);
    //    }
    //    printf("\n");
    //    printf("Mang arr2 sau khi hoan doi la: ");
    //    for (int i = 0; i < lengthof(arr2); ++i) {
    //        printf("%d, ", ptr2[i]);
    //    }
    //    printf("\n");
    //------------------------------------------------------------------------
    
    //------------------------------Bai 6-------------------------------------
    int num1, num2, sum;
    int *ptr1, *ptr2;
//    int (*fp)(int, int);  /* Khai báo con trỏ hàm */
    ptr1 = &num1;
    ptr2 = &num2;
    
//    fp = add;             /* Gán địa chỉ hàm cho con trỏ */
    sum = add(*ptr1, *ptr2);    /* Gọi hàm bằng con trỏ hàm */
    printf("sum = %d \n", sum);
    return 0;
    //------------------------------------------------------------------------
    
    //------------------------------Bai 7-------------------------------------
    //------------------------------------------------------------------------
    
    //------------------------------Bai 8-------------------------------------
    //------------------------------------------------------------------------
    
    //------------------------------Bai 9-------------------------------------
    //------------------------------------------------------------------------
    
    //------------------------------Bai 10------------------------------------
    //------------------------------------------------------------------------
    return 0;
}

