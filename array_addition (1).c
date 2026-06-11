#include<stdio.h>

int main ()
{
    int A[6]={1,2,3,4,5,6}, B[6]={10,9,8,7,6,5}, C[6];
    int i;

    for(i=0;i<6;i++)
    {
        C[i] = B[i] + A[i];
        printf("%d\t", C[i]);
    }

    return 0;
}
