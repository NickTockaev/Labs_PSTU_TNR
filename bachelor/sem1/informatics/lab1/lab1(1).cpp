#include <iostream>
#include <cmath>
using namespace std;

//вычисления для типа float
void floate() {
    float a = 100;
    float b = 0.001f;
    float fs = pow((a+b), 4);
    float ss = pow(a, 4)+4*pow(a, 3)*b+6*a*a*b*b;
    float ts = 4*a*pow(b, 3)+pow(b, 4);
    float fd = fs - ss;
    float sd = fd / ts;
    cout << "FLOAT:\n"<< fs << endl << ss << endl << ts << endl << fd << endl << sd << "\n\n";
}

//вычисления для типа double
void doublee() {
    double a = 100;
    double b = 0.001;
    double fs = pow((a+b), 4);
    double ss = pow(a, 4)+4*pow(a, 3)*b+6*a*a*b*b;
    double ts = 4*a*pow(b, 3)+pow(b, 4);
    double fd = fs - ss;
    double sd = fd / ts;
    cout << "DOUBLE:\n"<< fs << endl << ss << endl << ts << endl << fd << endl << sd << "\n";
}


int main() {
    floate(); 
    doublee(); 
    return 0;
}
/*
    Из-за ограниченной разрядной сетки мантиссы (24 бита у float против 53 у double), 
при вычитании близких по значению больших чисел (fd = fs - ss) тип float теряет 
младшие разряды и округляет разницу до нуля.
    Тип double за счет большей точности сохраняет этот «хвост» погрешности, 
позволяя получить корректный ненулевой результат.
*/