#include <stdio.h>
#include "limits.h"
#include "string"
#include "cmath"

using namespace std;

int cube(int n){
    return pow(n, 3);
}

int main() {
    int n;
    scanf("%i", &n);
    printf("%i", cube(n));
    return 0;
}
