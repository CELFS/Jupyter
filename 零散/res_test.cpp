#include <iostream>
using namespace std;

int func(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 1) {
        return func(x , n / 2) * func(x, n / 2) * x;
    }
    return func(x , n / 2) * func(x , n / 2);
}

int main() {
    int x, n;
    x = 2, n = 3;
    cout << func(x, n) << endl;
    return 0;
}
