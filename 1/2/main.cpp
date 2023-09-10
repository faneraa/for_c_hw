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

    int ch, m;
    scanf("%i %i", &ch, &m);


    for (int i = n; i >= m; --i){
        a[i + 1] = a[i];
    }
    a[m + 1] = ch;
    n = n + 1;

    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);

    return 0;
}
