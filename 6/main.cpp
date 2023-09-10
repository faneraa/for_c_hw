#include <stdio.h>
#include "limits.h"
#include "string"
using namespace std;

int f(int n){
    if (n % 2 == 0)
        return (n / 2);
    else
        return (3 * n + 1);
}

int w(int n){
    int k = 0;
    int len = 0;
    while (k == 0) {
        n = f(n);
        len += 1;
        if (n == 1) {
            k = 1;
            len += 1;
        }
    }
    return len;
}

int main() {
    int n, b;
    int max_len = 0;
    int nomb = 0;
    scanf("%i %i", &n, &b);
    for (; n <= b; ++n){
        if (w(n) > max_len){
            nomb = n;
            max_len = w(n);
        }
    }

    printf("%i %i", nomb, max_len);

    return 0;
}
