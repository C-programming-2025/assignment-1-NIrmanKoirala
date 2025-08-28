#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two integers (x, y): ");
    scanf("%d %d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("Swapped values: x = %d, y = %d\n", x, y);
    return 0;
}
