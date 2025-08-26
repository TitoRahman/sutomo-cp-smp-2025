#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        string num;
        cin >> num;
        if (num[0] == '1' && num[1] == '0' && num.size() >= 3) {
            if (num[2] != '0' && num[2] != '1') {
                cout << "YES" << endl;
            } else if (num.size() > 3 && num[2] != '0') {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}