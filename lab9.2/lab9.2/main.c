//
//  main.c
//  lab9.2
//
//  Created by Lại Minh Sáng on 09/10/2022.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    //Nhap so luong chuoi
    int n;
    printf("Input number of string: ");
    scanf("%d", &n);
    
    //Nhap chuoi
    char name[n][50], temp[25];
    printf("Input %d string:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Input string %d: ", i + 1);
        fflush(stdin);
        gets(name[i]);
    }
    
    //Sap xep
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (strcmp(name[j], name[j+1]) > 0) {
                strcmp(temp, name[j]);
                strcmp(name[j], name[j+1]);
                strcmp(name[j+1], temp);
            }
        }
    }
    
    //In ra chuoi sap xep
    printf("The strings appear after sorting : \n");
    for(int i = 0; i < n ; i++){
        printf("%s\n", name[i]);
    }
    
    return 0;
}
