#include <iostream>
#include <string>
using namespace std;

float spent_time(float river_speed, float boat_speed, float distance) {

	float all_time = (2 * distance) / (river_speed + boat_speed);

	return all_time;
}

int main() {
	setlocale(LC_ALL, "ru");

	float time;

	float speed_of_river;
	cout << "������� �������� ����: ";
	cin >> speed_of_river;

	float speed_of_boat;
	cout << "������� �������� ������: ";
	cin >> speed_of_boat;

	float distance;
	cout << "������� ���������� ����� ��������: ";
	cin >> distance;

	cout << "\n����� �������� " << spent_time(speed_of_river, speed_of_boat, distance) << " ����(-��) �� ���� ���� � �������. \n";

	return 0;
}

/* 2. �������� �������, ������� �������� �� ���� �������� ����, �������� ������
� ���������� ����� ��������, � ���������� �����, ������� ����� ��������
�� ���� ���� � ������� ������ (�.�. �� ���� ����-����).  */ 