#include <iostream>
#include <Windows.h>

using namespace std;

/* ������� �������*/ // 

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
	int z{};
	int x{};
	int y{};

public:             /*������� ��� ����*/  /* ������������ �������*/

	/*GET - �������� */
	/*SET - ��������� */

	int GetX()       /* �������� �������� �*/
	{
		return x;
	}

	void SetX(int x)  /*��������� ���������� � */
	{
		this->x = x;
	}

	int GetY()
	{
		return y;
	} 

	void SetY(int y)  /*��������� ���������� y */
	{
		this->y = y;
	}

	int GetZ()
	{
		return z;
	}

	void SetZ(int z)  /*��������� ���������� z */
	{
		this->z = z;
	}


	              /*���� � ������ ����� ���� � ������� � ������ � ���������*/
	void Print()  
	{
		cout << "\nx = " << x << "\ny= " << y << "\nz= " << z;
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
	a.SetX(5);
	a.SetY(10);
	a.SetZ(15);
	a.Print();


	return 0;
}