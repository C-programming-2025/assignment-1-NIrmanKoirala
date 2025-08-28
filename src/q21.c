#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter three integers (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);
    x = x + y + z;
    y = x - (y + z);
    z = x - (y + z);
    x = x - (y + z);
    printf("Swapped values: x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}