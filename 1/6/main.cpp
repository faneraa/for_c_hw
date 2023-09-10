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

    int b[1000];
    int j = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 1){
            b[j] = a[i];
            j += 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0){
            b[j] = a[i];
            j += 1;
        }
    }

    for (int i = 0; i < n; ++i)
        printf("%i ", b[i]);

    return 0;
}
