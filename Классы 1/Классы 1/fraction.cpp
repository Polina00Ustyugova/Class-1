#include <iostream>
#include "fraction.h"
using namespace std;
void fraction::Init(double F, int S)
{
	first = F;
	second = S;
}
/*void fraction::Read()
{
	setlocale(LC_ALL, "ru");
	cout << "������� ������ ����� �������������� ���������: ";
	cin >> first;
	cout << "������� ���������� ���������: ";
	cin >> second;
	cout << "������� ����� ��������, �������� �������� ������ ������: ";
	cin >> j;
}*/
double fraction::element(int j)
{
	return first*pow(second, j);
}