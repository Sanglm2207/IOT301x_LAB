//
//  main.c
//  Lab4.1
//
//  Created by Lại Minh Sáng on 05/10/2022.
//

#include <stdio.h>
#include <curses.h>

int main(int argc, const char * argv[]) {
    int a[10],n,i;
    
    printf("Nhap mot so bat ky: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("\nDang nhi phan cua so vua nhap la = ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n===========================\n");

}
