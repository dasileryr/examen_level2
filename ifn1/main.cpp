#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введите A: ";
    cin >> a;
    cout << "Введите B: ";
    cin >> b;
    cout << "Введите C: ";
    cin >> c;

    int m;

    if (a <= b && a <= c) {
        m = a;
    } else if (b <= a && b <= c) {
        m = b;
    } else {
        m = c;
    }

    cout << "Наименьшее число: " << m << endl;

    return 0;
}