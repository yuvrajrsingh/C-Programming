#include <stdio.h>

main(){

    /* Here is some more code to help you with printf(), Escape Sequences, and Conversion Characters */
    printf("Quatity\tCost\tTotal\n");
    printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
    printf("Too many spaces    \b\b\b\b can be fixed with the \\%c Escape character\n", 'b');
    printf("\n\a\n\a\n\a\n\aSkip few lines, and beep a few beeps.\n\n\n");
    printf("%s %c.", "You are kicking butt learning", 'C');
    printf("You just finished chapter %d.\nYou have finished %.1f%c of the book.\n", 4, 12.500, '%');
    printf("\n\nOne third equals %.2f or %.3f or %.4f or %.5f or %.6f\n\n\n", 0.333333, 0.333333, 0.333333, 0.333333, 0.333333);

    return 0;
}