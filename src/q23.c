// Given a variable num, write an expression that checks if it is a power of 2. without using if logic
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is %s a power of 2.\n", num, (num > 0 && (num & (num - 1)) == 0) ? "" : "not");
    return 0;
}