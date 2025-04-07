#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    int fact = 1;
    for (int i = n; i > 0; i--) {
        fact = fact * i;
    }
    return fact;
}
int findprime (int n) {
    double series1 = 0;
    double pi = 3.141592653589793;
    for (int i = 1; i <= pow(2, n); i++) {
        double series2 = 0;
        for (int j = 1; j <= i; j++) {
            series2 = series2 + floor(pow(cos(((double)(factorial(j-1)+1) / j) * pi), 2));
        }
        series1 = series1 + floor(pow((n/series2), 1.0/n));
    }
    return (series1 + 1);
}

int main(int argc, char* argv[]) {
    printf("%d \n", findprime(atoi(argv[1])));
}
