/* This program asks a user for their hometown and the two-letter abbreviation of their home state. It then uses string concatenation 
to build a new string with both town and state and prints it using puts. */

#include <stdio.h>
#include <string.h>

main(){

    char city[15];

    // 2 chars for the state abbrev, and one for the null zero
    char st[3];
    char fullLocation[18] = "";

    puts("What town do you live in? ");
    gets(city);

    puts("What state do you live in? (2-letter abbreviaton)");
    gets(st);

    /* Concatenates the strings */
    strcat(fullLocation,city);
    strcat(fullLocation,", "); // Adds a comma and space between the city and the state abbreviation
    strcat(fullLocation,st);

    puts("\nYou live in ");
    puts(fullLocation);
    return(0) ;
}