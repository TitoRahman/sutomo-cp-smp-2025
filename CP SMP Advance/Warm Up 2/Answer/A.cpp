#include <iostream>

using namespace std;

int main() {
    int n;
    int total = 0;
    for (int i = 0; i < n; i++) {
        std::string s;
        if (s.compare("++X") == 0) {
            total++;
        } else if (s.compare("X++") == 0) {
            total--;
        }
    }
    return 0;
}