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

    int r;
    scanf("%i", &r);

    for (int i = r; i < n; ++i)
        a[i] = a[i + 1];

    n -= 1;

    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);

    return 0;
}
