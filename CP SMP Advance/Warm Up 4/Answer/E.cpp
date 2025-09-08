#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int totalRoom = 0;
    for (size_t i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;

        if (q - p <= 2) totalRoom += 1;
    }
    cout << totalRoom;
    return 0;
}