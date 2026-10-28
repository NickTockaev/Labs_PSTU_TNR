#include <iostream>
using namespace std;

int main() {
    int n, i=1, a;
    bool f = false;
    cin>>n;
    while ((i<=n)&&(!f)){
        cin>>a;
        if (a==0){
            i++;
        }
        else {
            f = true;
        }
    }
    if (f){
        if (a>0){
            cout<<"Первое число - положительное = "<<a<<endl;
        }
        else {
            cout<<"Первое число - отрицательное = "<<a<<endl;
        }
    }
    else {
        cout<<"Все нули"<<endl;
    }
    return 0;
}
