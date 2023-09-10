#include <stdio.h>
#include "limits.h"
#include "string"
#include "cmath"

using namespace std;

int main() {
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    int c, d;
    scanf("%i %i", &c, &d);

    for (int i = c; i < d; ++i)
        a[i] = a[i + d - c];

    n = n - (d - c);


    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);

    return 0;
}
