#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int c;
    cin >> c;
    for (size_t i = 0; i < c; i++)
    {
        int n;
        cin >> n;
        string c1;
        string c2;
        
        cin >> c1;
        cin >> c2;

        c1 = c1.substr(0, n);
        c2 = c2.substr(0, n);

        bool isSame = true;
        for (size_t j = 0; j < c1.size(); j++)
        {
            // Note : G == B
            if (c1[j] == 'G' && c2[j] == 'B' || c1[j] == 'B' && c2[j] == 'G') {
                continue;
            }
            if (c1[j] != c2[j]) {
                isSame = false;
                break;
            }

        }
        cout << (isSame ? "YES" : "NO") << endl;
    }
    
    return 0;
}