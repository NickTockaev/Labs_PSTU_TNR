#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 0.1;
    double b = 1.0;
    int k = 10;
    double step = (b - a) / k; 
    double e = 0.00001;
    int n = 20;
    cout<<"X"<<"\t\t"<<"VALUE"<<"\t"<<"a)"<<"\t"<<"b)"<<endl;
    for (int i = 0; i<= k; i++){
        double x = a+i*step;
        double val = exp(2*x);
        double sum_a = 0;
        double fa = 1;  
        for (int m= 0; m < n; m++){
            sum_a = sum_a + fa;
            fa = fa*(2*x)/(m+1);
        }
        double sum_b = 0;
        double fb = 1;
        for (int m = 0; fb>=e; m++) {
            sum_b = sum_b + fb;
            fb = fb*(2*x)/(m+1);
        }
        cout << x << "\t\t" << val << "\t" << sum_a << "\t" << sum_b << endl;
    }


    return 0;
}