//
//  main.c
//  Lab9.3
//
//  Created by Lại Minh Sáng on 09/10/2022.
//

#include <stdio.h>
#include <stdbool.h>

int compareString (char* s1, char* s2) {
    int i = 0;
    while (s1[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

int isSubString (char* s1, char* s2) {
    int l1 = 0;
    int l2 = 0;
    int i = 0;
    while (s1[l1] != '\0') {
        l1++;
    }
    while (s2[l2] != '\0') {
        l2++;
    }
    if (l2 > l1) {
        return 0;
    }
    for (i = 0; i < l1 - l2 + 1; i++) {
        if (compareString (&s1[i], s2) == 1) {
            return 1;
        }
    }
    return 0;
}


int main() {
    char str[50], child[50];
    printf("Nhap chuoi:\n");
    scanf("%s", str);
    
    printf("Nhap chuoi con:\n");
    scanf("%s", child);
    
    if (isSubString (str, child) == 1) {
        printf ("is substring\n");
    }
    else {
        printf ("is not substring \n");
    }

}
