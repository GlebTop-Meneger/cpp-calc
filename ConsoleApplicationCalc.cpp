#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Добро пожаловать в калькулятор!" << endl;

    double a, b, c;

    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите второе число: ";
    cin >> b;

    cout << "Введите третье число: ";
    cin >> c;

    cout << "Результат сложения: " << (a + b + c) << endl;

    return 0;
}