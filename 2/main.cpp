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

    int x;
    scanf("%i", &x);
    int l = -1, r = n;
    while (l + 1 < r){
        int mid = (l + r) / 2;
        if (a[mid] >= x)
            r = mid;
        else
            l = mid;
    }

    printf("%i", r);

    return 0;
}
