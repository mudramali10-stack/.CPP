#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the first no:\t");
    scanf("%d", &a);

    printf("Enter the second no:\t");
    scanf("%d", &b);

    printf("Enter the third no:\t");
    scanf("%d", &c);

    if(a > b) {
        printf("The value is greater");
    } else {
        printf("The value is less");
    }

    return 0;
}
