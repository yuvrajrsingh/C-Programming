/* This program rolls two dice and presents the total. It then asks the user to guess if the next total will be higher, lower, or equal. 
It then rolls two more dice and tells the user how they did. */

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

main(){

    int dice1, dice2;

    int total1, total2;
    time_t t;
    char ans;

    // Remember that this is needed to make sure each random number generated is different

    srand(time(&t));

    // This would give you a number between 0 and 5, so the + 1 makes it 1 to 6

    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total1 = dice1 + dice2;
    printf("First roll of the dice was %d and %d, for a total of %d.\n\n\n", dice1, dice2, total1);

    do {
        puts("Do you think the next roll will be (H)igher, (L)ower, or (S)ame?\nEnter H, L, or S to reflect your guess.");

        scanf(" %c", &ans);
        ans = toupper(ans);
    } while ((ans != 'H') && (ans != 'L') && (ans != 'S'));

    // Roll the dice a second time to get your second total

    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total2 = dice1 + dice2;

    // Display the second total for the user

    printf("\nThe second roll was %d and %d, for a total of %d.\n\n", dice1, dice2, total2);

    // Now compare the two dice totals against the user's guess and tell them if they were right or not.

    if (ans == 'L'){
        
        if (total2 < total1){
            
            printf("Good job! You were right!\n%d is lower than %d\n", total2, total1);
        } else {

            printf("Sorry! %d is not lower than %d\n\n", total2, total1);
        }
    } else if (ans == 'H'){

        if (total2 > total1){

            printf("Good job! You were right!\n%d is higher than %d\n", total2, total1);
        } else {

            printf("Sorry! %d is not higher than %d\n\n", total2, total1);
        }
    } else if (ans == 'S'){

        if (total2 == total1){

            printf("Good job! You were right!\n%d is the same as %d\n\n", total2, total1);
        } else {

            printf("Sorry! %d is not the same as %d\n\n", total2, total1);
        }
    }

    return(0);
}