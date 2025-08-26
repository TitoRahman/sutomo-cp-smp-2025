#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string wordA;
    string wordB;

    getline(cin, wordA);
    getline(cin, wordB);

    int weightWordA = 0;
    int weightWordB = 0;

    for (char c : wordA) {
        if (c >= 'a') {
            weightWordA += c - 'a' + 1;
        } else {
            weightWordA += c - 'A' + 1;
        }
    }

    for (char c : wordB) {
        if (c >= 'a') {
            weightWordB += c - 'a' + 1;
        } else {
            weightWordB += c - 'A' + 1;
        }
    }

    if (weightWordA > weightWordB) {
        cout << "1" << endl;
    } else if (weightWordA < weightWordB) {
        cout << "-1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}