#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two integers (x, y): ");
    scanf("%d %d", &x, &y);
    int average = (x + y) / 2;
    printf("Average: %d\n", average);
    return 0;
}
