#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if ((((y == x + 1) || (y == x - 1)) && ((z == y + 1) || (z == y - 1))) && (abs(z - x) == 2)){
        cout << "Consecutive ";
    }
    if ((x < y) && (y < z)){
        cout << "Increasing";
    }
    else{
        if ((x > y) && (y > z)){
            cout << "Decreasing";
        }
        else{
            if ((x == y) && (y == z)){
                cout << "Equal";
            }
            else{
                cout << "None";
            }
        }
    }
    return 0;
}