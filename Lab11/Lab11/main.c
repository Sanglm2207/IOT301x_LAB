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
//Ham hoan doi vi tri
void hoanvi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Ham tinh giai thua
void findFact(int n,int *f)
{
    *f =1;
    for(int i=1;i<=n;i++)
        *f=*f*i;
}

// Ham JsonExtract để trích xuất thông tin của đối tượng JSON
void jsonExtract(char json[], char fullname[], char sex[], char phone[], char email[]) {
    //Mang info dung de luu thong tin nhu name, sex, phone and email
    // info[0] se luu gia tri {"fullname" : "Lai Minh Sang"}
    // info[1] se luu gia tri {"sex" : "male"}
    // info[2] se luu gia tri {"phone" : "0762121242"}
    // info[3] se luu gia tri {"email" : "sanglmFX18202@funix.edu.vn"}
    char info[100][100] = {0};
    int i;
    
    // Cat chuoi JSON dua vao dau ,
    char* token = strtok(json, ",");
    
    i = 0;
    while (token != NULL) {
        strcpy(info[i], token);
        ++i;
        token = strtok(NULL, ",");
    }
    
    //Trich xuat name
    char* name_token = strtok(info[0], ":");
    strcpy(fullname, strtok(NULL, ":"));
    
    //Trich xuat sex
    token = strtok(NULL, ",");
    char* sex_token = strtok(info[1], ":");
    strcpy(sex, strtok(NULL, ":"));
    
    //Trich xuat phone
    token = strtok(NULL, ",");
    char* phone_token = strtok(info[2], ":");
    strcpy(phone, strtok(NULL, ":"));
    
    //Trich xuat email
    token = strtok(NULL, ",");
    char* email_token = strtok(info[3], ":");
    strcpy(email, strtok(NULL, ":"));
    
    if (email[strlen(email)-1] == '}') {
        email[strlen(email)-1] = '\0';
    }
}

char *multi_tok( char *input, char *delimiter) {
    static char *string;
    if (input != NULL) {
        string = input;
    }
    if (string == NULL) {
        return string;
    }
    char *end = strstr(string, delimiter);
    if (end == NULL) {
        char *temp = string;
        string = NULL;
        return temp;
    }
    char *temp = string;
    *end = '\0';
    string = end + strlen(delimiter);
    return temp;
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
    //    int num1 = 2, num2 = 3, sum;
    //    int *ptr1, *ptr2;
    //    ptr1 = &num1;       /* Gán địa chỉ hàm cho con trỏ */
    //    ptr2 = &num2;
    //
    //    sum = add(ptr1, ptr2);    /* Gọi hàm bằng con trỏ hàm */
    //    printf("sum = %d \n", sum);
    
    //------------------------------------------------------------------------
    
    //------------------------------Bai 7-------------------------------------
    //    int a, b;
    //    printf("Nhap 2 so a, b:\n");
    //    scanf("%d%d", &a, &b);
    //
    //    printf("Ban da nhap:\na = %d \nb = %d\n", a, b);
    //
    //    hoanvi(&a, &b);
    //
    //    printf("Sau khi goi ham hoanvi:\na = %d\nb = %d \n", a, b);
    //------------------------------------------------------------------------
    
    //------------------------------Bai 8-------------------------------------
    //    int fact;
    //    int num1;
    //    printf("\n\n Find the factorial of a given number :\n");
    //    printf("------------------------------------------------------\n");
    //    printf(" Input a number : ");
    //    scanf("%d",&num1);
    //
    //    findFact(num1,&fact);
    //    printf(" The Factorial of %d is : %d \n\n",num1,fact);
    //------------------------------------------------------------------------
    
    //------------------------------Bai 9-------------------------------------
    //    char json[] = "{\"fullname\":\"LaiMinhSang\",\"sex\":\"male\",\"phone\":\"0762121242\",\"email\":\"sanglmFX18202@funix.edu.vn\"}";
    //    char fullname[100], sex[100], phone[100], email[100];
    //    jsonExtract(json, fullname, sex, phone, email);
    //
    //    printf("Thong tin cua doi tuong JSON:\n");
    //    printf("Ho ten             : %s\n", fullname);
    //    printf("Gioi tinh          : %s\n", sex);
    //    printf("So dien thoai      : %s\n", phone);
    //    printf("Email              : %s\n", email);
    //------------------------------------------------------------------------
    
    //------------------------------Bai 10------------------------------------
    char json[] = "[{\"fullname\":\"LaiMinhSang\",\"sex\":\"male\",\"phone\":\"0762121242\",\"email\":\"sanglmFX18202@funix.edu.vn\"},{\"fullname\":\"NguyenThiBichNgoc\",\"sex\":\"female\",\"phone\":\"0342207037\",\"email\":\"ngocntb@fpt.edu.vn\"},{\"fullname\":\"PhamThiHong\",\"sex\":\"female\",\"phone\":\"0342207037\",\"email\":\"hongpt@fpt.edu.vn\"},{\"fullname\":\"NguyenThanhNguyen\",\"sex\":\"female\",\"phone\":\"0342207037\",\"email\":\"nguyennt@fpt.edu.vn\"},{\"fullname\":\"NguyenTienThang\",\"sex\":\"male\",\"phone\":\"0923182799\",\"email\":\"thangnt@fpt.edu.vn\"}]";
    char fullname[100]={0}, sex[100]={0}, phone[100]={0}, email[100]={0};
    char customer[500]={0};
    char male_name[10][100]={0};
    int quanlity_male = 0;
    int quanlity_customer = 0;
    int i = 0;
    
    char* token = multi_tok(json, "},{");
    while (token != NULL) {
        strcpy(customer, token);
        jsonExtract(customer, fullname, sex, phone, email);
        if (strcmp(sex, "\"male\"") == 0) {
            strcpy(male_name[i], fullname);
            quanlity_male++;
            i++;
        }
        quanlity_customer++;
        token = multi_tok(NULL, "},{");
    }
    printf("Co tong cong %d khach hang nam / Tong so so %d khach hang \n", quanlity_male, quanlity_customer);
    if (quanlity_male > 0) {
        printf("Ho ten cac khach hang nam:\n");
        for (i = 0; i < quanlity_male; ++i) {
            printf("%d. %s\n", i+1, male_name[i]);
        }
    }
    //------------------------------------------------------------------------
    return 0;
}

