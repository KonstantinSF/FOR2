#include <iostream>
using namespace std;
//#define TABLITSA
#define PIFAGOR_TAB
void main ()
{

#ifdef PIFAGOR_TAB
	int result = 1;
	for (int i = 0; i < 10; i++)cout << i << "   ";//вывод столбика верхних множителей
	cout << endl << "-------------------------------------" << endl;//разделитель верх. множителя от таблицы
	for (int i = 1; i <= 9; i++)//цикл по вертикали
	{
		cout << i<< "|  ";//вывод столбика левых множителя с разделителем
		for (int j = 1; j <= 9; j++)//цикл по горизонтали
		{
		result = i * j;
		cout << result << "  ";//расстояние между цифрами таблицы
		if (result < 10)cout << " ";//добавление интервала для однозначных цифр (выравнивание)
		if (j == 9)cout << endl;//после 9 значения в строке идет перенос вниз
		}
	}
	cout << endl;
#endif

#ifdef TABLITSA
	//int result = 1;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int result = i * j;
			cout << i << " * " << j << " = " << result << "\t";
		}
		cout << endl;
	}
#endif
}