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
	cout << "Введите скорость реки: ";
	cin >> speed_of_river;

	float speed_of_boat;
	cout << "Введите скорость катера: ";
	cin >> speed_of_boat;

	float distance;
	cout << "Введите расстояние между городами: ";
	cin >> distance;

	cout << "\nКатер затратит " << spent_time(speed_of_river, speed_of_boat, distance) << " часа(-ов) на путь туда и обратно. \n";

	return 0;
}

/* 2. Написать функцию, которая получает на вход скорость реки, скорость катера
и расстояние между городами, а возвращает время, которое катер затратит
на путь туда и обратно вместе (т.е. на рейс туда-сюда).  */ 