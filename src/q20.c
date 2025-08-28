#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int result = (num % 3 == 0) || (num % 5 == 0);
    printf("Result: %d\n", result);
    return 0;
}
