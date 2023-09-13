#include <stdio.h>
#include "limits.h"
#include "string"
#include "cmath"

using namespace std;

int sum_of_digits(int n){
    int c = 0;
    while (n > 0){
        c += n % 10;
        n /= 10;
    }
    return c;
}

int sum_of_digits_rec(int n){
    if (n < 10)
        return n;
    else
        return (n % 10 + sum_of_digits_rec(n / 10));
}

int main() {
    int a;
    scanf("%i", &a);
    printf("%i\n", sum_of_digits(a));
    printf("%i", sum_of_digits_rec(a));
    return 0;
}
