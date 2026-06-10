1 #include <stdio.h>
2 
3 long long factorial(int n)
4 {
5     if (n == 0 || n == 1)
6         return 1;
7     else
8         return n * factorial(n - 1);
9 }
10 
11 int main()
12 {
13     int n;
14     long long fact;
15 
16     printf("Enter a number: ");
17     scanf("%d", &n);
18 
19     fact = factorial(n);
20 
21     printf("Factorial of %d = %lld", n, fact);
22 
23     return 0;
24 }
