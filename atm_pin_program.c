#include <stdio.h>

int main() {
    int correct_pin = 1234;
    int entered_pin;
    int i;

    for (i = 1; i <= 3; i++) {
        printf("Enter your ATM PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin == correct_pin) {
            printf("Access Granted\n");
            return 0;
        } else {
            printf("Wrong PIN. Attempts left: %d\n", 3 - i);
        }
    }

    printf("Card Blocked!\n");
    return 0;
}
