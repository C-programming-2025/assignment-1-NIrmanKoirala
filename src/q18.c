#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);
    int result = (a * a) + (b * b) + (c * c);
    printf("Result: %d\n", result);
    return 0;
}
