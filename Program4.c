#include <stdio.h>
main(){
    float a, b;
    
    printf("How much of a bonus did you get? ");
    scanf(" %f", &a);

    b = .85 * a;

    printf("If you give 15 percent to charity, you will still have %.2f.", b);
    return 0;
}