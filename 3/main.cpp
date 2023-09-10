#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int x;
    printf("Загадайте число, чтобы получить его квадрат и куб: ");
    scanf("%d", &x);
    printf("%d -> %3d -> %3d", x, int(pow(x, 2)), int(pow(x, 3)));

    return 0;
}