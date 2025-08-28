#include <stdio.h>
#include <math.h>

int main() {
    int a = 5;
    int b = 10;
    int result = (int)(sqrt(a + b) + 0.5);
    printf("The rounded square root of the sum is: %d\n", result);
    return 0;
}