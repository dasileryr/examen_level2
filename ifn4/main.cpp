#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Введите координаты точки (x): ";
    cin >> x;
    cout << "Введите координаты точки (y): ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "Точка находится в I четверти." << endl;
    } else if (x < 0 && y > 0) {
        cout << "Точка находится во II четверти." << endl;
    } else if (x < 0 && y < 0) {
        cout << "Точка находится в III четверти." << endl;
    } else {
        cout << "Точка находится в IV четверти." << endl;
    }

    return 0;
}