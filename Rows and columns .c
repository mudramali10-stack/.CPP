1  #include <stdio.h>
2  
3  int main()
4  {
5      int A[10][10], B[10][10], C[10][10];
6      int i, j, rows, cols;
7  
8      printf("Enter number of rows and columns: ");
9      scanf("%d %d", &rows, &cols);
10 
11     printf("Enter elements of first matrix:\n");
12     for(i = 0; i < rows; i++)
13     {
14         for(j = 0; j < cols; j++)
15         {
16             scanf("%d", &A[i][j]);
17         }
18     }
19 
20     printf("Enter elements of second matrix:\n");
21     for(i = 0; i < rows; i++)
22     {
23         for(j = 0; j < cols; j++)
24         {
25             scanf("%d", &B[i][j]);
26         }
27     }
28 
29     /* Matrix Addition */
30     for(i = 0; i < rows; i++)
31     {
32         for(j = 0; j < cols; j++)
33         {
34             C[i][j] = A[i][j] + B[i][j];
35         }
36     }
37 
38     printf("\nResultant Matrix:\n");
39 
40     for(i = 0; i < rows; i++)
41     {
42         for(j = 0; j < cols; j++)
43         {
44             printf("%d ", C[i][j]);
45         }
46         printf("\n");
47     }
48 
49     return 0;
50 }
