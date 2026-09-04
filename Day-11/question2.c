#include <stdio.h>
int main() {
    float cp, sp, percentage;

    printf("enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if(sp > cp)
    {
        percentage = ((sp - cp) / cp) * 100;
        printf("profit %g%%", percentage);
    }
    else if(sp < cp)
    {
        percentage = ((cp - sp) / cp) * 100;
        printf("loss %g%%", percentage);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}