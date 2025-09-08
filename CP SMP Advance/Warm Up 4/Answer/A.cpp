#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    // 0 is Easy
    // 1 is Hard

    bool isEasy = true;
    int problem;
    for (size_t i = 0; i < n; i++)
    {
        cin >> problem;
        if (problem == 1) {
            isEasy = false;
        }
        
    }
    if (isEasy) {
        cout << "Easy" << endl;
    } else {
        cout << "Hard" << endl;
    }
    
    return 0;
}