#include <iostream>
#include <Windows.h>

using namespace std;

class Human    // ����� �������
{

public:     // ��������� �����

	int age;          // ���� ������
	int weight;
	string name;

	void Print() // ������� �����  ������� �� ����� // ����� ������
	{
		cout << age << "\n" << weight << "\n" << name << "\n";
	}
};



int main()
{
	setlocale(LC_ALL, "rus");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("color 1F");

	Human firstHuman;  // ������� ������ ������ �������
	firstHuman.age = 30; // ����������� �������� "������ ���� ��� ������ "
	firstHuman.name = "Ivonov Ivan"; // ����������� �������� "������ ���� ��� ������ "
	firstHuman.weight = 100; // ����������� �������� "������ ���� ��� ������ "
	firstHuman.Print();  // �������� ������� ����� � ������� �� �����


	return 0;
}