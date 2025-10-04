/*Write a program in C that reads a single character from the user and checks whether it is:
An uppercase letter
A lowercase letter
A digit
Or a special symbol*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);

    if (isupper(ch))
    {
        printf("'%c' is an uppercase letter.\n", ch);
    }
    else if (islower(ch))
    {
        printf("'%c' is a lowercase letter.\n", ch);
    }
    else if (isdigit(ch))
    {
        printf("'%c' is a digit.\n", ch);
    }
    else
    {
        printf("'%c' is a special symbol.\n", ch);
    }

    return 0;
}
