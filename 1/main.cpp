#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x % 2 == 0 && (((x >= 0) && (x <= 20)) || ((100 < x) && (x < 200)))){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
