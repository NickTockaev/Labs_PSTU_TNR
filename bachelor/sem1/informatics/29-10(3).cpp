#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    const int n = 10;
    int arr[n];
    int max = 0;
    int min = pow(10, 10);
    int k = 0;
    int idxMIN, idxMAX;
    int a;
    for (int i = 0; i<n; i++)
    {
        cin>>a;
        arr[i] = a;
        if (arr[i] > max)
        {
            max = arr[i];
            idxMAX = i;
        }
        if (arr[i]<min)
        {
            min = arr[i];
            idxMIN = i;
        }
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<"MAX = "<<max<<" , idx = "<< idxMAX<<" , номер = "<< idxMAX+1 <<"\n"<<"MIN = "<<min<<" , idx = "<< idxMIN<<" , номер = "<< idxMIN+1<<endl;
    return 0;
}