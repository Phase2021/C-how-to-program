#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double beginning, ending, distance, fare;

    printf("TAXI FARE CALCULATOR \n");
    printf("Enter beginning odometer reading => ");
    scanf("%lf", &beginning);
    printf("Enter ending odometer reading => ");
    scanf("%lf", &ending);

    distance = ending - beginning;
    fare = distance * 1.50;

    printf("You traveled a distance of %.1f miles. At $1.50 per mile, your fare is $%.2f \n", distance, fare);

    system("PAUSE");
    return 0;
}
