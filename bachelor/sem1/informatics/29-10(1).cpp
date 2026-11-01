#include <iostream>
#include <stdlib.h>
using namespace std;

void method_vstavki(int* arr,int n) {
    for (int i = 1; i<n; i++)
    {
        for (int j = i; j>0; j--)
        {
            if (arr[j]<arr[j-1])
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void method_vibora(int* arr,int n) {
    for (int i = 0; i<n; i++)
    {
        int min = i;
        for (int j = i+1; j<n; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
        if (min!=i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        }
    }
}

void method_puzirka(int* arr,int n) {
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<n-i-1; j++)
        {
            if (arr[j]>arr[j+1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    std::srand(time(NULL));
    const int n = 10;
    int a, arr[n];
    cout<<"Изначальная матрица: ";

    for (int i=0; i<n; i++)
    {
        cin>>a;
        arr[i] = a;
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    method_vstavki(arr, n);
    cout<<"Метод вставки: ";
    for (int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n";
    method_puzirka(arr, n);
    cout<<"Метод выбора: ";
    for (int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    method_puzirka(arr, n);
    cout<<"Метод пузырька: ";
    for (int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}