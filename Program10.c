/* This is a sample program that asks users for some basic data and prints it on screen in order to show what was entered */

#include <stdio.h>

main(){

    // Set up the variables that scanf will fill

    char firstInitial;
    char lastInitial;
    int age;
    int favorite_number;

    printf("What letter does your first name begin with?\n");
    scanf(" %c", &firstInitial);

    printf("What letter does your last name begin with?\n");
    scanf(" %c", &lastInitial);

    printf("How old are you?\n");
    scanf(" %d", &age);

    printf("What is your favorite number (integer only)?\n");
    scanf(" %d", &favorite_number);

    printf("\nYour initials are %c.%c. and you are %d years old\nYour favorite number is %d.\n\n", firstInitial, lastInitial, age, favorite_number);

    return 0;
}