#include <stdio.h>
int main() {
int seconds, hours, minutes, remainingseconds;
printf("enter time in seconds: ");
scanf("%d", &seconds);
hours = seconds / 3600;
minutes = (seconds%3600) / 60;
remainingseconds = seconds % 60;
printf("%d:%d:%d\n", hours, minutes, remainingseconds);
return 0;
}