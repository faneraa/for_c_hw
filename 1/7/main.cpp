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

    for (int i = n; i >= 0; --i) {
        a[2 * i] = a[i];
        a[2 * i + 1] = a[i];
    }
    n = 2 * n;

    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);

    return 0;
}
