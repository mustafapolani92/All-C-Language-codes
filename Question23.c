/*Write a program in C to swap two numbers without using a third variable. and wtihout using bitwise
The program should only swap if the first number is greater than the second. Otherwise, keep them unchanged. */
#include <stdio.h>
int main()
{
    system("cls");
    int Num1, Num2;
    printf("Enter Num1: ");
    scanf("%d", &Num1);
    printf("Enter Num2: ");
    scanf("%d", &Num2);
    printf("Befor swapping the number: a = %d, b = %d\n", Num1, Num2);
    if (Num1 > Num2)
    {
        Num1 = Num1 + Num2;
        Num2 = Num1 - Num2;
        Num1 = Num1 - Num2;
        printf("After swapping the number: a = %d, b = %d\n", Num1, Num2);
    }
    else
    {
        printf("Not swapped because num1 is smaller than num2\n");
    }
}