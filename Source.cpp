#include <iostream>
#include <Windows.h>

using namespace std;

/* ������������ �������*/ // 

class Human    // ����� ������� 
{

public:     // ��������� ����� /* ������������ �������*/

	int age;          // ���� ������
	int weight;
	string name;

	void Print() // ������� �����  ������� �� ����� // ����� ������
	{
		cout << age << "\n" << weight << "\n" << name << "\n";
	}
};


class Point 
{ 
	             /*�� ��������� private*/
protected: /*��� ��������� ������ ����� ��� public*/   /* ������������ �������*/

private:         /*������ ��� ����*/   /* ������������ �������*/	
	int z;
public:          /*������� ��� ����*/  /* ������������ �������*/
	int x;
	int y;
	              /*���� � ������ ����� ���� � ������� � ������ � ���������*/
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

	Human firstHuman;  // ������� ������ ������ �������
	firstHuman.age = 30; // ����������� �������� "������ ���� ��� ������ "
	firstHuman.name = "Ivonov Ivan"; // ����������� �������� "������ ���� ��� ������ "
	firstHuman.weight = 100; // ����������� �������� "������ ���� ��� ������ "
	firstHuman.Print();  // �������� ������� ����� � ������� �� �����

	Point a;
	a.Print();



	return 0;
}