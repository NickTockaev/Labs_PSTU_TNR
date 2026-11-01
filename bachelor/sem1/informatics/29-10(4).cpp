#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    std::srand(time(NULL));

    const int n = 10;
    int arr[n];
    bool f = false;
    int a;
    for (int i = 0; i<n; i++)
    {
        cin>>a;
        arr[i] = a;
    }
    int i = 1;
    while (i < n && !f) 
    {
        if (arr[i] <= arr[i - 1]) 
        { 
            f = true;
        }
        i++;
    }

    cout<<endl;
    if (!f)
    cout<<"Массив упорядочен по возростонию";
    else
    cout<<"Массив не упорядочен по возростонию";
    return 0;
}