//
//  main.c
//  Lab13
//
//  Created by Lại Minh Sáng on 07/12/2022.
//

#include <stdio.h>
#include <stdlib.h>
#define max 10000
int main(int argc, const char * argv[]) {
    //--------------Bai 1------------------------------
    //    FILE *pfile = NULL;
    //    char *fileName = "text.txt";
    //    pfile = fopen(fileName, "w+");
    //    if (pfile == NULL){
    //        printf("Error opening the file %s", fileName);
    //    }
    //    printf("Nhap thong tin: ");
    //    char info[100];
    //    scanf("%s", info);
    //    fprintf(pfile, "%s", info);
    //    fclose(pfile);
    //--------------Bai 2------------------------------
    //    FILE *pfile = NULL;
    //    char *fileName = "text.txt";
    //    char str[10000];
    //    pfile = fopen(fileName, "r");
    //    if (pfile != NULL){
    //        while (fgets(str, max, pfile)) {
    //            printf("%s \n", str);
    //        }
    //        fclose(pfile);
    //    }
    //--------------Bai 3------------------------------
    //    FILE *pfile = NULL;
    //    char *fileName = "text.txt";
    //    char ch;
    //    int linesCount = 0;
    //    pfile = fopen(fileName, "r");
    //    if (pfile == NULL){
    //        printf("Error opening the file %s", fileName);
    //    } else {
    //        while ((ch =fgetc(pfile)) != EOF) {
    //            if (ch == '\n') {
    //                linesCount++;
    //            }
    //        }
    //        printf("Total number of lines are: %d\n", ++linesCount);
    //    }
    //    fclose(pfile);
    //--------------Bai 4------------------------------
        FILE *fp1 = fopen("file1.txt", "r");
        FILE *fp2 = fopen("file2.txt", "r");
        FILE *fp3 = fopen("file3.txt", "w");
        char c;
        if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
            puts("Could not open files");
            exit(0);
        }
        // Copy contents of first file to file3.txt
        while ((c = fgetc(fp1)) != EOF) {
            fputc(c, fp3);
        }
        // Copy contents of second file to file3.txt
        while ((c = fgetc(fp2)) != EOF) {
            fputc(c, fp3);
        }
        printf("Merged file1.txt and file2.txt into file3.txt");
        fclose(fp1);
        fclose(fp2);
        fclose(fp3);
    //--------------Bai 5------------------------------
    //rename file
//    char old_name[] = "file2.txt";
//    char new_name[] = "test2.txt";
//    int value;
//    value = rename(old_name, new_name);
//    // Print the result
//    if(!value) {
//        printf("%s", "File name changed successfully");
//    } else {
//        perror("Error");
//    }
    //delete file
//    char buffer[100];
//    int rem;
//    printf("Nhap ten file can xoa:  \n");
//    scanf("%s", buffer);
//    rem = remove(buffer);
//    if(!rem) {
//        printf("%s", "File name changed successfully");
//    } else {
//        perror("Error");
//    }
    return 0;
}
