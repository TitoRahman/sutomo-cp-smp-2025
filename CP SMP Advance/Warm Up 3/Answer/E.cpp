#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;
    int totalRemoved = 0;
    char stones[n];
    cin >> stones;
    for (int i = 1; i < n; i++) {
        if (stones[i-1] == stones[i]) totalRemoved++;
    }
    cout << totalRemoved;
    return 0;
}