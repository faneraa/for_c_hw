#include <stdio.h>
#include "limits.h"
#include "string"
#include "cmath"

using namespace std;

int triangle(int n){
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= i; ++j)
            printf("*");
        printf("\n");
    }
}

int main() {
    int a;
    scanf("%i", &a);
    triangle(a);
    return 0;
}
