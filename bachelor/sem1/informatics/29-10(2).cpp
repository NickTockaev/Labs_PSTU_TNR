#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    std::srand(time(NULL));

    int const n = 4;
    int arr[2][n];
    int sum1 = 0;
    int sum2 = 0;
    int a;
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<n; j++)
        {
            cin>>a;
            arr[i][j] = a;
            if (i == 0)
            {
                sum1 += arr[0][j];
            }
            else
            {
                sum2 += arr[1][j];
            }
            cout<<arr[i][j]<<" ";
        }
        cout << '\n';
    }
    cout<<"Сумма первой строки = "<<sum1<<"\n"<<"Сумма второй строки = "<<sum2<<endl;
    return 0;
}