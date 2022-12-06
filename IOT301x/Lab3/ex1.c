/*
 * This is Lab No. 3, created by Lai Minh Sang
 * Date of creation: 22/09/2022
 * Date of modified: 22/09/2022
 * Goal of this project: Tinh chu vi va dien tich cua hinh chu nhat
 */
#include <stdio.h>
#include <conio.h>

int main()
{
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
