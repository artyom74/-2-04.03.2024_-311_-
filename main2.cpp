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
    cout << "������� ������������� ������� ���������: ";
    cin >> res1;

    cout << "������� ������������� ������� ���������: ";
    cin >> res2;

    cout << "������� ������������� �������� ���������: ";
    cin >> res3;

    cout << "\n��������������� ������������ �������������: " << parallel_resistance(res1, res2, res3) << "\n";


    return 0;
}


// 3. �������� �������, ������� �������� �� ���� 3 ���������, � ���������� ������������� �� ������������� �����������.