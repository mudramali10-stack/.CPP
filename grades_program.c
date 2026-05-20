#include <stdio.h>

int main()
{
    int a;

    printf("Enter the marks: ");
    scanf("%d", &a);

    if (a >= 90)
    {
        printf("Grade A+ : Excellent");
    }
    else if (a >= 80)
    {
        printf("Grade A");
    }
    else if (a >= 70)
    {
        printf("Grade B");
    }
    else if (a >= 60)
    {
        printf("Grade C");
    }
    else if (a >= 50)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
