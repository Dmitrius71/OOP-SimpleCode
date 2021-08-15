#include <iostream>
#include <Windows.h>

using namespace std;

class Human    // Класс Человек
{

public:     // публичный метод

	int age;          // поля класса
	int weight;
	string name;

	void Print() // Функция принт  выводит на зкран // Метод Класса
	{
		cout << age << "\n" << weight << "\n" << name << "\n";
	}
};



int main()
{
	setlocale(LC_ALL, "rus");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("color 1F");

	Human firstHuman;  // создаем объект класса Человек
	firstHuman.age = 30; // присваеваем значение "только если зто паблик "
	firstHuman.name = "Ivonov Ivan"; // присваеваем значение "только если зто паблик "
	firstHuman.weight = 100; // присваеваем значение "только если зто паблик "
	firstHuman.Print();  // вызываем функцию Принт и выводим на экран


	return 0;
}