#include <iostream>
#include <string.h>

using namespace std;

void Gets(char s[]) {
    int i = 0;
    char c;
    bool fl = true;
    while (i < 255 && fl) {
        cin.get(c);
        if (c == '\n') {
            fl = false;
        } else {
            s[i++] = c;
        }
    }
    s[i] = '\0';
}

int main() {
    const int LEN = 256;
    const int MAX = 128;

    char s[LEN];
    char w[MAX][LEN];
    char dW[MAX][LEN];
    bool isD[MAX];

    Gets(s);

    int wC = 0;
    int dC = 0;
    int i = 0;

    while (s[i] != '\0' && s[i] != '.') {
        while (s[i] == ' ') {
            i++;
        }

        if (s[i] != '\0' && s[i] != '.') {
            int k = 0;
            while (s[i] != ' ' && s[i] != '.' && s[i] != '\0') {
                w[wC][k++] = s[i++];
            }
            w[wC][k] = '\0';

            if (w[wC][0] >= '0' && w[wC][0] <= '9') {
                isD[wC] = true;
                strcpy(dW[dC], w[wC]);
                dC++;
            } else {
                isD[wC] = false;
            }

            wC++;
        }
    }

    for (int a = 0; a < dC - 1; ++a) {
        for (int b = 0; b < dC - a - 1; ++b) {
            if (strcmp(dW[b], dW[b + 1]) < 0) {
                char tmp[LEN];
                strcpy(tmp, dW[b]);
                strcpy(dW[b], dW[b + 1]);
                strcpy(dW[b + 1], tmp);
            }
        }
    }

    int dI = 0;
    for (int j = 0; j < wC; ++j) {
        if (j > 0) {
            cout << " ";
        }
        if (isD[j]) {
            cout << dW[dI++];
        } else {
            cout << w[j];
        }
    }
    cout << "." << endl;

    return 0;
}