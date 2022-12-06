//
//  main.c
//  Ex3_Lab3
//
//  Created by Lại Minh Sáng on 05/10/2022.
//

#include <stdio.h>

enum COMPANY_ENUM
{
    GOOGLE,
    FACEBOOK,
    XEROX,
    YAHOO,
    EBAY,
    MICROSOFT
};

int main(int argc, const char * argv[]) {
    
    enum COMPANY_ENUM google = GOOGLE;
    enum COMPANY_ENUM facebook = FACEBOOK;
    enum COMPANY_ENUM xerox = XEROX;
    enum COMPANY_ENUM yahoo = YAHOO;
    enum COMPANY_ENUM ebay = EBAY;
    enum COMPANY_ENUM microsoft = MICROSOFT;
    
    printf("The value of google is : %d\n", GOOGLE);
    printf("The value of facebook is : %d\n", FACEBOOK);
    printf("The value of xerox is : %d\n", XEROX);
    printf("The value of yahoo is : %d\n", YAHOO);
    printf("The value of ebay is : %d\n", EBAY);
    printf("The value of microsoft is : %d\n", MICROSOFT);

    return 0;

}
