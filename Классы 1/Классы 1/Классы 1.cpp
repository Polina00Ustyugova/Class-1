#include <iostream>
#include "fraction.h"
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	fraction A;
	double first;
	int second, j;
	cout << "Введите первое число арифметической прогресии: ";
	cin >> first;
	cout << "Введите постоянное отношение: ";
	cin >> second;
	cout << "Введите номер элемента, значение которого хотите узнать: ";
	cin >> j;
	A.Init(first, second);
	cout << "Элемент " << j << " равен " << A.element(j);

}