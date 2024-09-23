/* This program asks the user their state of happiness on a scale of 1 to 10 and then gives a custom 2-line message based on their 
range, either 1-2, 3-4, 5-7, or 8-10. */

#include <stdio.h>

main(){

    int prefer;

    printf("On a scale of 1 to 10, how happy are you?\n");
    scanf(" %d", &prefer);

    // Once the user's level of happiness is entered, a seried of if statements test the number against decreasing numbers. Only one
    // of the four will be executed.

    if (prefer >= 8){

        printf("Great for you!\nThings are going well for you!\n");
    } else if (prefer >= 5){

        printf("Better than average, right?\nMaybe things will get even better soon!\n");
    } else if (prefer >= 3){

        printf("Sorry you're feeling not so great.\nHope things turn around soon...\n");
    } else {

        printf("Hang in there--things have to improve, right?\nAlways darkest before the dawn.\n");
    }

    return 0;
}