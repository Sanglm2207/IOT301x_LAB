//
//  main.c
//  Ex1_Lab5
//
//  Created by Lại Minh Sáng on 07/10/2022.
//

#include <stdio.h>

#define PAYRATE      12.00  //$12 / hour
#define TAXRATE_300  0.15   //15%
#define TAXRATE_450  0.20   //20%
#define TAXRATE_REST 0.25   //25%
#define OVERTIME     40     //hour

int main(int argc, const char * argv[]) {
    //Bai 1
    //    float a, b;
    //    printf("Nhập số a và số b: \n");
    //    scanf("%f %f", &a, &b);
    //
    //    if ((a != (int)a) || (b != (int)b)) {
    //        printf("Số nhập vào không phải là số nguyên!");
    //    };
    //    if (a > b ){
    //        printf("so a lon hon so b");
    //    } else if (a < b ) {
    //        printf("so a nho hon so b");
    //    } else {
    //        printf("so a bang so b");
    //    }
    // Bai 2
    //    int a;
    //    printf("Nhap vao so a \n");
    //    scanf("%d", &a);
    //
    //    if (a % 2 == 0) {
    //        printf("%d la so chan\n", a);
    //    } else {
    //        printf("%d la so le\n", a);
    //    }
    // Bai 3
    //    int nhietdo;
    //    printf("Nhap nhiet do: \n");
    //    scanf("%d", &nhietdo);
    //
    //    if(nhietdo < 0 ) {
    //        printf("Thoi tiet lanh cong! \n");
    //    } else if (nhietdo < 10) {
    //        printf("Thoi tiet rat lanh! \n");
    //    } else if (nhietdo < 20) {
    //        printf("Thoi tiet lanh! \n");
    //    } else if (nhietdo < 30) {
    //        printf("Thoi tiet tuyet voi! \n");
    //    } else if (nhietdo < 40 ) {
    //        printf("Thoi tiet nong! \n");
    //    } else {
    //        printf("Thoi tiet rat nong! \n");
    //    }
    // Bai 4
    unsigned int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;
    
    printf("Nhap so gio ban lam viec: \n");
    scanf("%d\n", &hours);
    
    //calculate the gross pay
    if (hours <= 40) {
        grossPay = hours * PAYRATE;
    } else {
        grossPay = 40 * PAYRATE;
        double overtimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overtimePay;
    }
    //calculate taxes
    if (grossPay <= 300) {
        taxes = grossPay * TAXRATE_300;
    } else if (grossPay > 300 && grossPay <= 450) {
        taxes = grossPay * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_450;
    } else {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_450;
        taxes += (grossPay - 450) * TAXRATE_REST;
    }
    // calculate netpay
    netPay = grossPay - taxes;
    
    //output
    printf("Your gross pay this week is: %.2f\n", grossPay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", netPay);

    return 0;
    
}
