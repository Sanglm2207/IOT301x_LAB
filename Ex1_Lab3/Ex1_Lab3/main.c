//
//  main.c
//  Ex1_Lab3
//
//  Created by Lại Minh Sáng on 05/10/2022.
//

#include <stdio.h>
#include <curses.h>


int main(int argc, const char * argv[]) {
    float length, width, perimeter, area;
    
    printf(" - Nhap chieu dai: ");
    scanf("%f", &length);
    
    printf(" - Nhap chieu rong: ");
    scanf("%f", &width);
    
    if ((width > 0) && (length > 0))
    {
        perimeter = 2 * (length + width);
        area = length * width;
        
        printf("\n => Chu vi cua hinh chu nhat co chieu dai %.2f va chieu rong %.2f la = %.2f", length, width, perimeter);
        printf("\n => Dien tich cua hinh chu nhat co chieu dai %.2f va chieu rong %.2f la = %.2f", length, width, area);
    }
    else
    {
        printf(" => Gia tri khong hop le");
    }
    printf("\n >>>>> funix.edu.vn <<<<<\n");
}
