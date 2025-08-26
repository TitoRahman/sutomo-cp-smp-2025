#include <iostream>

using namespace std;

int main() {
    int bear, bigBear;
    cin >> bear >> bigBear;
    int years = 0;
    while (bear <= bigBear) {
        bear *= 3;
        bigBear *= 2;
        years++;
    }
    cout << years;
    return 0;
}