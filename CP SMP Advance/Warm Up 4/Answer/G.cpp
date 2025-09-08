#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;

        for (size_t i = 0; i < 5; i++)
        {
            if (a <=  b && a <= c) a++;
            else if (b <= a && b <= c) b++;
            else c++;
        }
        cout << a*b*c << endl;
    }
    
    
    return 0;
}