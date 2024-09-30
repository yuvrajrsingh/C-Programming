/* This program takes the book info file from the example; also reads each line from the file and outputs it to the screen. */

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

main(){

    char fileLine[100]; // Will hold each line of input
    fptr = fopen("C:\\Users\\anyuv\\Documents\\BookInfo.txt","r");

    if (fptr != 0){

        while(!feof(fptr)){

            fgets(fileLine, 100, fptr);
            if (!feof(fptr)){
                puts(fileLine);
            }
        }
    } else {

        printf("\nError opening file.\n");
    }
    fclose(fptr); // Always close your files
    return(0);
}