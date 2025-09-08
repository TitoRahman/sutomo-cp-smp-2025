#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    string year;
    cin >> year;
    year = to_string(stoi(year) + 1);
    bool isBeautiful = true;
    do {
        isBeautiful = true;
        for (size_t i = 1; i < 4; i++)
        {
            int f = count(year.begin(), year.end(), year[i]);
            if (f > 1) {
                isBeautiful = false;
                year = to_string(stoi(year) + 1);
                break;
            }
        }
        if (isBeautiful) cout << year;
    } while (!isBeautiful);
    
    
    return 0;
}