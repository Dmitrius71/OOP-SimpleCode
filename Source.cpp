#include <iostream>
#include <Windows.h>

using namespace std;

/* Модификаторы доступа*/ // 

class Human    // Класс Человек 
{

public:     // публичный метод /* Модификаторы доступа*/

	int age;          // поля класса
	int weight;
	string name;

	void Print() // Функция принт  выводит на зкран // Метод Класса
	{
		cout << age << "\n" << weight << "\n" << name << "\n";
	}
};


class Point 
{ 
	             /*ПО умолчанию private*/
protected: /*Для дочернего класса будет как public*/   /* Модификаторы доступа*/

private:         /*Скрыто для всех*/   /* Модификаторы доступа*/	
	int z;
public:          /*Открыто для всех*/  /* Модификаторы доступа*/
	int x;
	int y;
	              /*Поля и методы могут быть и прайвет и паблик и протектед*/
	void Print()  
	{
		cout << "x= " << x << "\ny= " << y << "\nz= " << z;
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

	Point a;
	a.Print();



	return 0;
}