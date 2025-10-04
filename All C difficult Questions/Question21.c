#include <stdio.h>

int main() {
    int a, b, i, array1[40], array2[40], z, x, y, gcd = 1;

    x = 0;
    y = 0;

    printf("Enter the value of a and b such that a/b so that I can simplify it for you:\n");
    printf("Value of a: ");
    scanf("%d", &a);
    printf("Value of b: ");
    scanf("%d", &b);

    printf("The simplified form of %d/%d is: ", a, b);

   
    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            array1[x] = i;
            x++;
        }
    }

    for (i = 1; i <= b; i++) {
        if (b % i == 0) {
            array2[y] = i;
            y++;
        }
    }

    for (i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (array1[i] == array2[j]) {
                gcd = array1[i];
            }
        }
    }

    a = a / gcd;
    b = b / gcd;

    printf("%d/%d\n", a, b);

    return 0;
}

