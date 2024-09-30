/* The program opens the existing book info file from the example, and adds a line to the end. */

#include <stdio.h>
#include <stdlib.h>

FILE * fptr;

main(){

    fptr = fopen("C:\\Users\\anyuv\\Documents\\BookInfo.txt","a");

    if (fptr == 0){

        printf("Error opening the file! Sorry!\n");
        exit(1);
    }

    // Adds the line at the end
    fprintf(fptr,"\nMore books to come!\n");

    fclose(fptr); // Always close your files
    return(0);
}