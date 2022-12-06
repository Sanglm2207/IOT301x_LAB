//
//  main.c
//  Lab9.4
//
//  Created by Lại Minh Sáng on 09/10/2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[100];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] == '\0'))){
            for (int j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
        }
    }
    printf("%s \n", str);
    return 0;
}
