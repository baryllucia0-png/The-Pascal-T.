#include <iostream>
#include <vector>

using namespace std;

void displayPascalTriangle(int n) {
    vector<vector<long long > > pascal(n);

    for (int i = 0; i < n; ++i) {
        pascal[i].resize(i + 1);
        
        pascal[i][0] = 1;
        pascal[i][i] = 1;
        
        for (int j = 1; j < i; ++j) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }

        for (int space = 0; space < n - i - 1; ++space) {
            cout << " ";
        }

        for (int j = 0; j <= i; ++j) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    if (cin >> n && n >= 0) {
        displayPascalTriangle(n);
    } else {
        cout << "Invalid input: Please enter a non-negative integer." << endl;
    }
    return 0;
}

