#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        if (x > y) cout << y << " " << x;
        else cout << x << " " << y;
        cout << endl;
    }
    
    return 0;
}