#include <iostream>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int width = 0;  
    for (size_t i = 0; i < n; i++)
    {
        int person;
        cin >> person;

        if (person > h) width += 2;
        else width += 1;
    }
    
    cout << width;
    return 0;
}