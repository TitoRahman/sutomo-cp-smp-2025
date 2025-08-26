#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        bool isUnlockable = true;
        while (x >= 33) {
            if (x%33 > 0) {
                string x_str = to_string(x);
                size_t index_sub_x_str = x_str.find("33");
                if (index_sub_x_str == string::npos) {
                    isUnlockable = false;
                    break;
                }
                x_str.erase(index_sub_x_str, 2);
                x = stoi(x_str);
            }
            if (x > 0 && x < 33) {
                isUnlockable = false;
                break;
            }
            if (x%33 == 0) {
                break;
            }
        }

        if (isUnlockable) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}