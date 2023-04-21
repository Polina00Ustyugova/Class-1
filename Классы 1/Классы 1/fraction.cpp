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
	cout << "Введите первое число арифметической прогресии: ";
	cin >> first;
	cout << "Введите постоянное отношение: ";
	cin >> second;
	cout << "Введите номер элемента, значение которого хотите узнать: ";
	cin >> j;
}*/
double fraction::element(int j)
{
	return first*pow(second, j);
}