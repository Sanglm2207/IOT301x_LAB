//
//  main.c
//  Lab6
//
//  Created by Lại Minh Sáng on 07/10/2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //Bai 1
    //    int n;
    //    scanf("%d", &n);
    //    for (int i = 1; i <= n; i++) {
    //        if (i % 2 == 0) {
    //            printf("%d\n ", i);
    //        }
    //    }
    //Bai 2
    int b = 0;
    printf("So can doan co 2 chu so:");
    scanf("%d", &b);
    
    while (b != 65) {
        printf("Da doan sai, nhap lai");
        scanf("%d", &b);
    }
    printf("Xin chuc mung, da doan dung\n");
    return 0;
    
}
