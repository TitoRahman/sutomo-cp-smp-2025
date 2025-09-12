#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int c;
    cin >> c;

    for (size_t i = 0; i < c; i++)
    {
        int n, m;
        cin >> n >> m;

        string circle[n];

        for (size_t j = 0; j < n; j++)
        {
            cin >> circle[j];
            circle[j] = circle[j].substr(0, m);
        }

        int top = -1, left = -1, right = m, bottom = n;
        for (size_t y = 0; y < n; y++)
        {

            for (size_t x = 0; x < m; x++)
            {
                if (circle[y][x] == '#') {
                    top = max((int) y, top);
                    right = min((int) x, right);
                    bottom = min((int) y, bottom);
                    left = max((int) x, left);
                }
            }
        }
        cout << (top + bottom)/2 + 1 << " " << (left + right)/2 + 1 << endl;

    }
    

    return 0;
}