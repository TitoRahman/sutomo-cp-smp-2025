#include <iostream>

using namespace std;

int main() {
    int n;
    for (int i = 0; i < n; i++) {
        std::string s;
        if (s.length() >= 10) {
            cout << s[0];
            int temp = 0;
            for (int j = 1; j < s.length()-2; j++) {
                temp += 1;
            }
            cout << temp;
            cout << s[s.length()-1] << endl;
        }
    }
    return 0;
}