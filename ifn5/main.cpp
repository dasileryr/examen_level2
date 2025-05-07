#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите целое число: ";
    cin >> n;

    if (n == 0) {
        cout << "нулевое число" << endl;
    } else {
        if (n > 0) {
            cout << "положительное ";
        } else {
            cout << "отрицательное ";
        }

        if (n % 2 == 0) {
            cout << "четное число" << endl;
        } else {
            cout << "нечетное число" << endl;
        }
    }

    return 0;
}