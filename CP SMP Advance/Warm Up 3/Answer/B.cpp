#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n, m;
    cin >> n;
    for (size_t x = 0; x < n; x++)
    {
        cin >> m;
        vector<int> arr(m);

        for (size_t i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        string isPossible = "YES";
        while (arr.size() > 1)
        {
            int max = *max_element(arr.begin(), arr.end());
            int min = *min_element(arr.begin(), arr.end());
            // cout << max << " " << min << endl;
            if (max - min > 1) {
                isPossible = "NO";
                break;
            }
            else {
                int minIndex = distance(arr.begin(), min_element(arr.begin(), arr.end()));
                arr.erase(arr.begin() + minIndex);
            }
        }

        cout << isPossible << endl;
    }
    
    return 0;
}