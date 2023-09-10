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

int main() {
    int k = 0;
    int n;
    int max = INT_MIN;
    int len = 0;
    scanf("%i", &n);

    while (k == 0){
        printf("%i ", n);
        if (n > max)
            max = n;
        n = f(n);
        len += 1;
        if (n == 1){
            k = 1;
            len += 1;
            printf("1\n");
        }
    }

    printf("Length = %i, Max = %i", len, max);
    return 0;
}
