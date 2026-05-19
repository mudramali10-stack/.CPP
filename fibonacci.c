#include <stdio.h>

int main() {
    int n = 10;
    int a = 1, b = 1, next, i;

    printf("fibonacci series:\n");

    for (i = 1; i <= n; i++) {
        printf("%d\n", a);

        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
