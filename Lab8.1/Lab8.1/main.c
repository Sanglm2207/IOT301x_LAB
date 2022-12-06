//
//  main.c
//  Lab8.1
//
//  Created by Lại Minh Sáng on 07/10/2022.
//

#include <stdio.h>
#include <math.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

// Ham tim UCLN
int UCLN(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

//Ham tinh tri tuyet doi
float giaTriTuyetDoi(float x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

// Ham tinh n!
long giaiThua(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * giaiThua(n - 1);
    }
}

// Ham tinh khoang cach giua hai diem A(Ax, Ay) va B(Bx, By) trong khong gian 0xy
float khoangCach(float Ax, float Ay, float Bx, float By) {
    return sqrt((Ax - Bx) * (Ax - Bx) + (Ay - By) * (Ay - By));
}
