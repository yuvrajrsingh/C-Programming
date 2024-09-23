/* This program defines a series of variables and expressions and then uses both relational and logical operators to test them against 
each other. */

#include <stdio.h>

main(){

    // set up some common triggers for the program
    int planets = 8;
    int friends = 6;
    int potterBooks = 7;
    int starWars = 6;
    int months = 12;
    int beatles = 4;
    int avengers = 6;
    int baseball = 9;
    int basketball = 5;
    int football = 11;

    // The first logical statement uses the AND operator to test whether the cast of Friends and the Beatles would have enough people
    // to make a baseball team AND the cast of Friends and the Avengers would have enough people to field a football team. If so, the 
    // the statements will print.
    if ((friends + beatles >= baseball) && (friends + avengers >= football)){

        printf("The cast of Friends and the Beatles could make a baseball team,\nAND the cast of Friends plus the Avengers could");
        printf("make a football team.\n");
    } else {

        printf("Either the Friends cannot make a baseball team with the Fab Four, \nOR they can't make a Gridiron Gang with the ");
        printf("Avengers (or both!)\n");
    }
    // This second logical statement uses the OR operator to test whether the number of Star Wars movies is less than months in the 
    // year OR the number of Harry Potter books is less than months in the year. If either statement is true, the statements will print.

    if ((starWars <= months) || (potterBooks <= months)){

        printf("\nYou could read one Harry Potter book a month,\nand finish them all in less than a year,\nOR you could see one Star");
        printf(" Wars movie a month,\nand finish them all in less than a year.\n");
    } else {

        printf("Neither can happen--too many books or movies,\nNot enough time!\n\n");
    }

    // This final logical statement uses the NOT operator to test whether the number of baseball players on a team added to the number 
    // of basketball players on a team is NOT greater than the number of football players on a team. If so, the statements will print.

    if (!(baseball + basketball > football)){
        
        printf("\nThere are fewer baseball and basketball players\ncombined than football players.");
    } else {

        printf("\nThere are more baseball and basketball players\ncombined than football players.");
    }

    return 0;
}