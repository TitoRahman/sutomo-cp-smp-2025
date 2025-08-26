#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int acc_cost = 0;
    for (size_t i = 1; i <= w; i++) {
        acc_cost += i;
    }
    cout << k * acc_cost - n;


    return 0;
}