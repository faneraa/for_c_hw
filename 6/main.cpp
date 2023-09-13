#include <stdio.h>
#include "limits.h"
#include "string"
#include "cmath"

using namespace std;


void print_binary(int n){
    if (n > 1)
        print_binary(n / 2);
    printf("%i", n % 2);
}

int main(void) {
    int a;
    scanf("%i", &a);
    print_binary(a);
    return 0;
}
