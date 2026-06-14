#include <stdio.h>

int main()
{
    char grade;

    printf("Enter Grade (A/B/C/D/F): ");
    scanf(" %c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent");
            break;

        case 'B':
            printf("Very Good");
            break;

        case 'C':
            printf("Good");
            break;

        case 'D':
            printf("Pass");
            break;

        case 'F':
            printf("Fail");
            break;

        default:
            printf("Invalid Grade");
    }

    return 0;
}
