#include <stdio.h>
#include <math.h>
int main(){
float p, r, t, si, ci, amount;
printf("enter principal, rate and time: ");
scanf("%f %f %f", &p, &r, &t);
si = (p* r * t)/100;
amount = p * pow((1 + r / 100), t);
ci = amount - p;
ci = amount -p;
printf("simple interest=%.2f\n", si);
printf("compound interest=%.2f\n", ci);
return 0;
}