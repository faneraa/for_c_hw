#include <stdio.h>
#include "limits.h"
#include "string"
#include "cmath"

using namespace std;

int print_even(int a, int b){
    for (int i = a; i <= b; ++i)
        if (i % 2 == 0)
            printf("%i ", i);

}

int main() {
    int a, b;
    scanf("%i %i", &a, &b);
    print_even(a, b);
    return 0;
}
