// Create an expression that checks if a given number is a perfect square.

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is %s a perfect square.\n", num, (sqrt(num) == (int)sqrt(num)) ? "" : "not");
    return 0;
}