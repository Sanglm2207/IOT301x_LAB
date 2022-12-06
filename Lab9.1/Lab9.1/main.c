//
//  main.c
//  Lab9.1
//
//  Created by Lại Minh Sáng on 09/10/2022.
//

#include <stdio.h>
#include <stdbool.h>


// Ham tinh do dai chuoi
int length(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

//Ham noi 2 chuoi
char* compound(char s1[], char s2[]) {
    int len1 = length(s1);
    int len2 = length(s2);
    //Noi chuoi s2 vao s1
    for (int i = 0; i < len2; i++) {
        s1[len1 + i] = s2[i];
    }
    s1[len1 + len2] = '\0';
    return s1;
}

//Ham kiem tra chuoi
bool compare(char s1[], char s2[]) {
    if(length(s1) != length(s2)) {
        return false;
    }
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    //Lay do dai chuoi string
    char string1[100] = "FUNiX EDUCATION ";
    int lenS1 = length(string1);
    printf("%d\n", lenS1);
    
    char string2[100] = "Chu dong hoc - Chu dong thanh cong";
    int lenS2 = length(string2);
    printf("%d\n", lenS2);
    
    //Kiem tra chuoi
    if (compare(string1, string2) == true) {
        printf("2 chuoi giong nhau \n");
    } else {
        printf("2 chuoi khac nhau \n");
    }
    
    //Noi chuoi
    printf("%s\n ", compound(string1, string2));
    
    return 0;
}
