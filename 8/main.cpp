#include <stdio.h>
#include "limits.h"
#include "string"
#include "cmath"

using namespace std;

int main() {
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);

    for (int i = a / c; c * i <= b; ++i){
        if ((c * i >= a) && (c * i <= b)){
            printf("%i ", c * i);
        }
    }

    return 0;
}
