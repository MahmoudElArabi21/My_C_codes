//  9) Write a C function to get the nth term of Fibonacci series
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584
    // 0+1 = 1
    // 1+1 = 2
    // 2+1 = 3
    // 3+2 = 5
    // 5+3 = 8
    // 8+5 = 13

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    } 
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main (){
     int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int fib = fibonacci(n);
    printf("The %dth term in the Fibonacci series is: %d\n", n, fib);
}
