//
//  main.c
//  Lab7.5
//
//  Created by Lại Minh Sáng on 07/10/2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n, arr[101];
    int temp = 0;
    printf("Enter the value of N \n");
    scanf("%d", &n);
    
    printf("Enter the numbers \n");
    for (int i = 0; i < n; ++i) {
        scanf("%d ", &arr[i]);
    }
    
    //Sort array in descending order
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n");
    
    printf("Elements of array sorted in descending order:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    //Sort the array in ascending order
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("\n");
    
    //Displaying elements of array after sorting
    printf("Elements of array sorted in ascending order: \n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
