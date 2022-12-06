/*
* This is Lab No. 2, created by Lai Minh Sang
* Date of creation: 22/09/2022
* Date of modified: 22/09/2022
* Goal of this project: Viết chương trình C sử dụng lệnh scanf() và printf() để nhập thông tin từ bàn phím khi chương trình đang chạy và hiển thị thông tin vừa nhận
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char bien;              //Tao mot bien co ten la bien
    scanf("%c", &bien);     // Dung scanf de nhap du lieu tu ban phim
    printf("%c\n", bien);
}