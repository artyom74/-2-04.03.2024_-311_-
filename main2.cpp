#include <iostream>
#include <string>
using namespace std;

float parallel_resistance(double r1, double r2, double r3) {

    float answer = 1 / (1 / r1 + 1 / r2 + 1 / r3);

    return answer;
}

int main() {
    setlocale(LC_ALL, "ru");

    float res1, res2, res3;
    cout << "Введите сопротивление первого резистора: ";
    cin >> res1;

    cout << "Введите сопротивление второго резистора: ";
    cin >> res2;

    cout << "Введите сопротивление третьего резистора: ";
    cin >> res3;

    cout << "\nСоответствующее параллельное сопротивление: " << parallel_resistance(res1, res2, res3) << "\n";


    return 0;
}


// 3. Написать функцию, которая получает на вход 3 резистора, а возвращает сопротивление их параллельного подключения.