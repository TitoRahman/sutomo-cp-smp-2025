#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        int horizontal = word[0] - 'a' + 1;
        int vertical = word[1] - '1' + 1;

        for (size_t j = 1; j < 9; j++)
        {
            for (size_t k = 1; k < 9; k++)
            {
                if (k == horizontal|| j == vertical && (k != j))
                    cout << (char)('a' + (k - 1)) << (char)('1' + (j - 1)) << endl;
            }
        }
        
    }

    return 0;
}