#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int result = (ch >= 'A') && (ch <= 'Z');
    printf("Result: %d\n", result);
    return 0;
}
