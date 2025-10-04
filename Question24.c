/*Write a program in C that takes three integers as input and prints the smallest number using if–else statements.*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    printf("Enter Number 3: ");
    scanf("%d", &num3);
    if (num1 < num2 && num1 < num3)
    {
        printf("%d is the smallest number", num1);
    }
    else if (num2 < num3 && num2 < num1)
    {
        printf("%d is the smallest number", num2);
    }
    else if (num3 < num1 && num3 < num2)
    {
        printf("%d is the smallest number", num3);
    }
}
