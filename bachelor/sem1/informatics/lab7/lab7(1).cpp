/* для а)
#include <iostream>
using namespace std;

int min(int* arr, int n)
{
    int min = arr[0];
    for (int i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}

long min(long* arr, int n)
{
    long min = arr[0];
    for (int i=0; i<n; i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main(){
        
    const int NMAX=100;
    int m, n, a, arrINT[NMAX];
    long arrLONG[NMAX];
    cin>>n>>m;
    for (int i=0; i<n; i++)
    {
        cin>>a;
        arrINT[i] = a;
    }
    for (int i=0; i<m; i++)
    {
        cin>>a;
        arrLONG[i] = a;
    }
    cout << min(arrINT, n) << endl;
    cout << min(arrLONG, m) << endl;
    return 0;
}
    */

// для б)
#include <iostream>
#include <string>

using namespace std;

size_t minWordLen(const string& s) {
    size_t min_len = s.length() + 1, cur = 0;
    for (size_t i = 0; i <= s.length(); ++i) {
        if (i < s.length() && s[i] != ' ') {
            ++cur;
        } else if (cur > 0) {
            if (cur < min_len) min_len = cur;
            cur = 0;
        }
    }
    return (min_len > s.length()) ? 0 : min_len;
}

size_t minWordLen(const char* s) {
    if (!s) return 0;
    return minWordLen(string(s));
}

int main() {
    setlocale(LC_ALL, "");
    string s1;
    char s2[100];
    getline(cin, s1);
    cout << "std::string: " << minWordLen(s1) << endl;
    cin.getline(s2, 100);
    cout << "const char*: " << minWordLen(s2) << endl;

    return 0;
}
