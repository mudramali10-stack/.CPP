#include <stdio.h>

int main() {
    int a;

    printf("Enter the first number:\t");
    scanf("%d", &a);

    if(a % 2 == 0) {
        printf("This is an even number");
    }
    else {
        printf("This is an odd number");
    }

    return 0;
}
