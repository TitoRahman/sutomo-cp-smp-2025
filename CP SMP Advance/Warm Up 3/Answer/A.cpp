#include <iostream>

using namespace std;

int main() {
    int n;
    int p, v, t;

    cin >> n;
    int solved_problem = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> p >> v >> t;
        if (p + v + t > 2)
            solved_problem++;
    }
    cout << solved_problem << endl;

    return 0;
}