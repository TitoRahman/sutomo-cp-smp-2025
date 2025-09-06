#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        int diff = 0;
        for (char c : word) {
            diff++;
        }

        cout << diff << endl;
    }
    
    return 0;
}