/* The program demonstrates functions returning a value by passing three floating-point numbers (grades) and calculating the average of 
the three. */

#include <stdio.h>
float gradeAve(float test1, float test2, float test3);

main(){

    float grade1, grade2, grade3;
    float average;

    printf("What was the grade on the first test? ");
    scanf(" %f", &grade1);

    printf("What was the grade on the second test? ");
    scanf(" %f", &grade2);

    printf("What was the grade on the third test? ");
    scanf(" %f", &grade3);

    // Pass three grades to the function and return the average

    average = gradeAve(grade1, grade2, grade3);
    printf("\nWith those three test scores, the average is %.2f", average);

    return 0;
}

/**************************************************************************************************************************************/

float gradeAve(float test1, float test2, float test3)
// Recieves the value of three grades
{
    float localAverage;

    localAverage = (test1 + test2 + test3)/3;

    return (localAverage); // Returns the average to main
}