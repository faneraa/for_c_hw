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

    int c = 0;
    for (int i = 0; i < n - 1; ++i){
        if (a[i] < 0){
            int k = i + 1;
            while ((a[k] < 0) && (k < n))
                k += 1;
            if (a[k] > 0){
                a[n] = a[i];
                a[i] = a[k];
                a[k] = a[n];
                c += 1;
            }
        }
        else
            c += 1;
    }

    n = c;


    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);

    return 0;
}
