//The population of a town A is less than the population of town B. However, the population of town A is
//growing faster than the population of town B. Write a program that prompts the user to enter the
//population and growth rate of each town. The program outputs after how many years the population of
//town A will be greater than or equal to the population of town B and the populations of both the towns at
//that time. (A sample input is: Population of town A = 5000, growth rate of town A = 4%, population of town
//B = 8000, and growth rate of town B = 2%.
#include <stdio.h>

int main() {
    float TownA, TownB;
    float RateA, RateB;
    int years = 0;

    printf("Enter the population of Town A: ");
    scanf("%f", &TownA);

    printf("Enter the growth rate (in %% per year) of Town A: ");
    scanf("%f", &RateA);

    printf("Enter the population of Town B: ");
    scanf("%f", &TownB);

    printf("Enter the growth rate (in %% per year) of Town B: ");
    scanf("%f", &RateB);

    if (TownA >= TownB) {
        printf("Population of Town A is already greater than or equal to Town B.\n");
        return 0;
    }

    while (TownA < TownB) {
        TownA = TownA + (TownA * RateA / 100.0);
        TownB = TownB + (TownB * RateB / 100.0);
        years++;
    }

    printf("\nAfter %d years:\n", years);
    printf("Population of Town A = %.0f\n", TownA);
    printf("Population of Town B = %.0f\n", TownB);

    return 0;
}


