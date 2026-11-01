#include <iostream>
using namespace std;

int main()
{
    int const N_MAX = 100;
    int a, n, arr[N_MAX], temp[N_MAX];
    
    cout << "Введите кол-во элементов массива:" << endl;
    cin >> n;
    
    cout << "Изначальный массив: ";
    for (int i = 0; i < n; i++) {
        cin >> a;
        arr[i] = a;      
    }

    int k;
    cout << "Введите k: " << endl;
    cin >> k;
    
    // 1), 2) 
    cout << "Закольцованный массив справа налево, начиная с k элемента: " << endl;
    for (int i = 0; i < n; i++) {
        temp[i] = arr[k];
        cout << temp[i] << " ";
        k = (k - 1 + n) % n;
    }
    cout << endl;

    // 3)
    if (n + 2 <= N_MAX) {
        int fv = temp[0];
        int lv = temp[n];

        for (int i = n; i > 0; i--) {
            temp[i] = temp[i - 1];
        }
        temp[0] = fv;
        n++;

        temp[n] = lv;
        n++;
    }

    // 4) 
    for (int i = 0; i < n; i++) {
        if (temp[i] % 2 != 0) {   
            for (int j = i; j < n - 1; j++)
                temp[j] = temp[j + 1];
            n--;
            i--;
        }
    }

    // 5)
    cout << "Введите новый индекс K для вывода измененного кольца (0.. " << n-1 << "): " << endl;
    cin >> k;
    
    cout << "Результат обхода измененного кольца от K до K+1 справа налево: " << endl;
    for (int i = 0; i < n; i++) {
        cout << temp[k] << " ";
        k = (k - 1 + n) % n;
    }
    cout << endl;

    return 0;
}
