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


    int l = -1, r = n;
    while (l + 1 < r){
        int mid = (l + r) / 2;
        if (a[mid] > a[mid + 1] && a[mid] > a[mid - 1]){
            printf("%i", mid);
            return mid;
        }
        else{
            if (a[mid] > a[mid + 1] && a[mid] < a[mid - 1])
                r = mid;
            if (a[mid] < a[mid + 1] && a[mid] > a[mid - 1])
                l = mid;
        }
    }



    return 0;
}
