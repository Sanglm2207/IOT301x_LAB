/*
 * This is Lab No. 3, created by Lai Minh Sang
 * Date of creation: 22/09/2022
 * Date of modified: 22/09/2022
 * Goal of this project: So sánh sự khác biệt khi thay đổi giá trị của một biến trong enum.
 */
#include <stdio.h>

enum Company
{
    GOOGLE,
    FACEBOOK,
    XEROX,
    YAHOO,
    EBAY,
    MICROSOFT
};

int main()
{
    enum Company google = GOOGLE;
    enum Company facebook = FACEBOOK;
    enum Company xerox = XEROX;
    enum Company yahoo = YAHOO;
    enum Company ebay = EBAY;
    enum Company microsoft = MICROSOFT;

    printf("The value of google is: %d\n", google);
    printf("The value of facebook is: %d\n", facebook);
    printf("The value of xerox is: %d\n", xerox);
    printf("The value of yahoo is: %d\n", yahoo);
    printf("The value of ebay is: %d\n", ebay);
    printf("The value of microsoft is: %d\n", microsoft);
}