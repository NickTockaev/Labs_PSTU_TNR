#include <iostream>
using namespace std;

int main()
{
    double sum = 0;
    double a_n = 1;
    double e = 0.0001;
    for (int n = 2; a_n >= e; n++) {
        a_n = (n*1.0)/((n-1)*(n-1));
        if (a_n>=e){
            sum = sum + a_n;
        }
    }
    cout<<sum<<"\n";    
    return 0;
}