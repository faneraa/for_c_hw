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

    int g;
    scanf("%i", &g);

    for (int i = n; i >= 0; --i){
        a[i + g] = a[i];
    }
    for (int i = 0; i < g; ++i) {
        a[i] = a[i + n];
    }

    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);

    return 0;
}
