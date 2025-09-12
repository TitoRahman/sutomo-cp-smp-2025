#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int c;
    cin >> c;

    for (size_t i = 0; i < c; i++)
    {
        long long p;
        cin >> p;
        bool p2 = true;
        bool multOccurance = false;
        for (long long x = 2; x*x <= p; x++)
        {
            if (multOccurance) {
                p2 = false;
                break;
            }
            if (x*x == p) {
                p2 = true;
            }
        }

        if (p2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}