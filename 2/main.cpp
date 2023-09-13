#include <stdio.h>
#include "limits.h"
#include "string"
#include "cmath"

using namespace std;

int is_even(int n){
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int a, b;
    scanf("%i %i", &a, &b);
    printf("%i\n", is_even(a));
    printf("%i\n", is_even(b));
    return 0;
}
