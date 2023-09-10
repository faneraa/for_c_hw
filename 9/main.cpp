#include <stdio.h>
#include "limits.h"
#include "string"
#include "cmath"

using namespace std;

int main() {
    int n;
    scanf("%i", &n);
    int flag = 0;

    for (int a = 1; a <= n; ++a){
        for (int b = a; b <= n; ++b){
            for (int c = b; c <= n; ++c){
                if (pow(a, 2) + pow(b, 2) == pow(c, 2)){
                    for (int i = 2; i < (n/2 + 1); ++i){
                        if ((a % i == 0) && (b % i == 0) && (c % i == 0)){
                            if (pow(a / i, 2) + pow(b / i, 2) == pow(c / i, 2))
                                flag = 1;
                        }
                    }
                    if (flag == 0)
                        printf("%i %i %i\n", a, b, c);
                    flag = 0;
                }
            }
        }
    }

    return 0;
}
