//
//  main.c
//  Lab7
//
//  Created by Lại Minh Sáng on 07/10/2022.
//
#include <stdio.h>
#include <stdlib.h>

#define YEARS 5
#define MONTHS 12

int main(int argc, const char * argv[]) {
    //    // Bai 1 + 2
    //    //Initialize array
    //    int arr[] = {1, 2, 3, 4, 5};
    //    //Calculate length of array
    //    int length = sizeof(arr)/sizeof(arr[0]);
    //
    //    printf("Original array: \n");
    //    //Loop through the array by incrementing value of i
    //    for (int i = 0; i < length; i++) {
    //        printf("%d ", arr[i]);
    //    }
    //
    //    printf("\n");
    //
    //    printf("Array in reverse order: \n");
    //    //Loop through the array in reverse order
    //    for (int i = length-1; i >= 0; i--) {
    //        printf("%d ", arr[i]);
    //    }
    
    // Bai 3
    //    int i, a = 0, count;
    //    while(a <= 100)
    //    {
    //        count = 0;
    //        i = 2;
    //        while(i <= a/2)
    //        {
    //            if(a%i == 0)
    //            {
    //                count++;
    //                break;
    //            }
    //            i++;
    //        }
    //        if(count == 0 && a != 1 )
    //        {
    //            printf(" %d ", a);
    //        }
    //        a++;
    //    }
    //Bai 4
    float rain[YEARS][MONTHS] =
    {
        { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
        { 8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3 },
        { 9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4 },
        { 7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2 },
        { 7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2 }
    };
    
    int year, month;
    float subtot, total;
    printf("YEAR\t\tRAINFAIL (inches)\n");
    for (year = 0, total =0;year < YEARS; year++) {
        for (month = 0, subtot =0;month < MONTHS; month++) {
            subtot += rain[year][month];
        }
        printf("%5d \t\t%15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\n The yearly average is %.1f inches. \n\n", total/YEARS);
    
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
    
    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += rain[year][month];
        
        printf("%4.1f ", subtot/YEARS);
    }
    
    printf("\n");
    
    return 0;
    
}
