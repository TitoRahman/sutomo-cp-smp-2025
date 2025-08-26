#include <iostream>

using namespace std;

int main() {
    string formula;
    cin >> formula;
    int total = 0;
    string numbers = "";
    if (formula.find('+') == string::npos) {
        total = stoi(formula);
    } else {
        for (char c : formula) {
            if (c == '+') {
                total += stoi(numbers);
                numbers = "";
                continue;
            }
            numbers += c;
        }
        if (!numbers.empty()) {
            total += stoi(numbers);
        }
    }
    cout << total << endl;
    return 0;
}