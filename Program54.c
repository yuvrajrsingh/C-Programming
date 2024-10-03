/* The program demonstrates passing an array to a function. */

#include <stdio.h>
#include <string.h>

main(){

    char name[15] = "Michael Hatton";
    change(name);
    printf("Back in main(), the name is now %s.\n", name);

    return(0); // Ends the program
}

/**************************************************************************************************************************************/

/* Sometimes putting dividers like the one above is a nice break between your different functions. */

change(char name[15]) // Recieves the value of i
{
    // Change the string stored at the address pointed to by name

    strcpy(name, "XXXXXXXXXXX");
    return; // Returns to main
}