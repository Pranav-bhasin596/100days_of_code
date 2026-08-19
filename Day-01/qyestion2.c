#include <stdio.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);

    printf("sum = %.2f\n", a + b);
    printf("difference = %.2f\n", a - b);
    printf("product = %.2f\n", a * b);

    if (b !=0)
    printf("quotient = %.2f\n", a / b);
    else
    printf("quotient = undefined\n");
    return 0;

}