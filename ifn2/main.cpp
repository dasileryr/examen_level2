#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Введите A: ";
    cin >> A;
    cout << "Введите B: ";
    cin >> B;
    cout << "Введите C: ";
    cin >> C;


    bool r =      (A > 0 && B <= 0 && C <= 0) ||
                  (A <= 0 && B > 0 && C <= 0) ||
                  (A <= 0 && B <= 0 && C > 0);

    cout << "Ровно одно число положительное: " << boolalpha << r << endl;

    return 0;
}