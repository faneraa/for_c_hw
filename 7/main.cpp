#include <stdio.h>
#include "limits.h"
#include "string"
#include "cmath"

using namespace std;

int main() {
    int n, m;
    scanf("%i %i", &n, &m);
    int sum = 0;

    for (int i = 0; i <= n; ++i){
        for (int j = 0; j <= m; ++j){
            sum += pow(-1, i + j) * i * j;
        }
    }

    printf("%i", sum);

    return 0;
}
