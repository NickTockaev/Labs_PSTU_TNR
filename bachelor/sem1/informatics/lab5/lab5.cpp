#include <iostream>
#include <string>

using namespace std;

const int MAX_N = 100;

void fillMatrix(char matrix[][MAX_N], int n, const string& s) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = s[i * n + j];
        }
    }
}

void sortMATRIX(char matrix[][MAX_N], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (matrix[j][0] > matrix[j + 1][0]) {
                for (int k = 0; k < n; ++k) {
                    char temp = matrix[j][k];
                    matrix[j][k] = matrix[j + 1][k];
                    matrix[j + 1][k] = temp;
                }
            }
        }
    }
}

bool f(char matrix[][MAX_N], int n) {
    for (int i = 1; i < n; ++i) {
        if (matrix[i][0] <= matrix[i - 1][0]) {
            return false;
        }
    }
    return true;
}

void printMatrix(char matrix[][MAX_N], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    char matrix[MAX_N][MAX_N];
    int n;
    string s;

    cin >> n >> s;

    fillMatrix(matrix, n, s);
    sortMATRIX(matrix, n);

    if (f(matrix, n)) {
        cout << "Можно\n";
        printMatrix(matrix, n);
    } else {
        cout << "Нельзя\n";
    }

    return 0;
}