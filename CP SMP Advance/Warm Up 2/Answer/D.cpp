#include <iostream>

using namespace std;

int main() {

    int matrix[5][5];
    int posOf1X = -1;
    int posOf1Y = -1;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                posOf1X = i;
                posOf1Y = j;
            }
        }
    }

    int moveX = abs(posOf1X - 2);
    int moveY = abs(posOf1Y - 2);

    cout << moveX + moveY << endl;

    return 0;
}