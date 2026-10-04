#include <iostream>

using namespace std;


int main() {
    setlocale(LC_ALL, "Russian"); 

    //gjgjhjhkh
    cout << "Добро пожаловать в калькулятор!" << endl;

    cout << "Введите первое число: ";

   
    double a;
    cin >> a;

    cout << "Введите второе число: ";
    double b;
    cin >> b;

   
    cout << "Результат сложения: " << (a + b) << endl;

    return 0;
}
