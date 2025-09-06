#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vector<int> numbers;
        for (size_t j = 0; j < x; j++)
        {
            int number;
            cin >> number;
            numbers.push_back(number);
        }
        
        auto min_numbers = min_element(numbers.begin(), numbers.end());
        int total = 0;

        for (int number: numbers) {
            total += number - *min_numbers;
        }
        cout << total;       
    }
    return 0;
}