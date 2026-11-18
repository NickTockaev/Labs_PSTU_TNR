#include <iostream>
#include <cstdarg>
using namespace std;

bool isBelong(double x, double y, double R) {
    return (x * x + y * y) <= (R * R);
}

int belong(int count, ...) {
    va_list args;
    va_start(args, count);

    double R = va_arg(args, double);
    int pointsCount = (count - 1) / 2;
    int result = 0;

    for (int i = 0; i < pointsCount; ++i) {
        double x = va_arg(args, double);
        double y = va_arg(args, double);

        if (isBelong(x, y, R)) {
            ++result;
        }
    }

    va_end(args);
    return result;
}

int main() {
    double R;
    double x[5], y[5];

    cout << "Вызов 1 (3 параметра): введите R и координаты 1 точки (x1 y1): ";
    cin >> R >> x[0] >> y[0];
    cout << "Принадлежит точек: " << belong(3, R, x[0], y[0]) << "\n\n";

    cout << "Вызов 2 (9 параметров): введите R и координаты 4 точек (x1 y1 ... x4 y4): ";
    cin >> R;
    for (int i = 0; i < 4; ++i) {
        cin >> x[i] >> y[i];
    }
    cout << "Принадлежит точек: "
         << belong(9, R, x[0], y[0], x[1], y[1], x[2], y[2], x[3], y[3]) << "\n\n";

    cout << "Вызов 3 (11 параметров): введите R и координаты 5 точек (x1 y1 ... x5 y5): ";
    cin >> R;
    for (int i = 0; i < 5; ++i) {
        cin >> x[i] >> y[i];
    }
    cout << "Принадлежит точек: "
         << belong(11, R, x[0], y[0], x[1], y[1], x[2], y[2], x[3], y[3], x[4], y[4]) << endl;

    return 0;
}
