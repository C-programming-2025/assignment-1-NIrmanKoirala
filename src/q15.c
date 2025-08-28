#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int result = (num > 0) && (num / 2 * 2 == num);
    printf("Result: %d\n", result);
    return 0;
}
