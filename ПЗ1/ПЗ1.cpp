// ПЗ1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    system("color F1");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Прізвище
    string last_name;
    cout << "Введіть прізвище: ";
    getline(cin, last_name);

    // Ім'я
    string first_name;
    cout << "Введіть ім'я: ";
    getline(cin, first_name);

    // Вік
    int age;
    cout << "Введіть вік: ";
    cin >> age;

    // Курс
    int course;
    cout << "Введіть курс: ";
    cin >> course;
    cin.ignore();

    // Місто проживання
    string city;
    cout << "Введіть місто проживання: ";
    getline(cin, city);

    // Хобі
    string hobby;
    cout << "Введіть ваше хобі: ";
    getline(cin, hobby);

    // Очищення буфера після введення числа
    cin.ignore();

    // Вивід введених даних
    cout << "\nВаші дані:" << endl;
    cout << "Прізвище: " << last_name << endl;
    cout << "Ім'я: " << first_name << endl;
    cout << "Вік: " << age << endl;
    cout << "Курс: " << course << endl;
    cout << "Місто проживання: " << city << endl;
    cout << "Хобі: " << hobby << endl;

    return 0;
}


