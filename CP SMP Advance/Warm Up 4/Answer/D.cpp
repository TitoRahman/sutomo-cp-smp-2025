#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x1, x2, y1, y2;
        int x_temp, y_temp;
        
        for (size_t j = 0; j < 4; j++)
        {
            cin >> x_temp >> y_temp;
            if (j == 0) {
                x1 = x_temp;
                y1 = y_temp;
            } else {
                if (x1 != x_temp) {
                    x2 = x_temp;
                }
                if (y1 != y_temp) {
                    y2 = y_temp;
                }
            }
        }
        int square = abs(x1 - x2) * abs(y1 - y2);
        cout << square << endl;
    }
    return 0;
}