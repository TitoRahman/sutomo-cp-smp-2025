#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;  // Read size of array

        vector<int> arr_num(a);  // Use vector instead of raw array
        int temp = 0;

        for (int j = 0; j < a; j++) {
            cin >> arr_num[j];
            if (arr_num[j] % 2 == j % 2) {
                temp += 1;
            }
        }

        cout << temp << endl;
    }

    return 0;
}