#include <iostream>
using namespace std; 
using std::cout;
using std::cin;
using std::endl; 

//#define FIBONACCI_NUMBERS
#define FIBONACCI_LIMIT

void main()
{
	setlocale(LC_ALL, "");
#ifdef FIBONACCI_NUMBERS
	int num_fibonacci;
	cout << "Введите количество чисел ряда Фибоначчи:"; cin >> num_fibonacci;
	long long* Fibonacci = new long long[num_fibonacci];
	for (int i = 0; i < num_fibonacci; i++)
	{
		if (i == 0) Fibonacci[0] = 0;
		else if (i == 1) Fibonacci[1] = 1;
		else Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];
	}
	for (int i = 0; i < num_fibonacci; i++)
	{
		cout << Fibonacci[i] << "\t";
	}
	cout << endl;
	delete[] Fibonacci;
#endif
#ifdef FIBONACCI_LIMIT
	long long lim_num_fibonacci;//число,меньше которого выводятся числа из ряда Фибоначчи
	cout << "Введите предельное число, до которого хотите увидеть ряд Фиббоначи: "; cin >> lim_num_fibonacci;
	int size_fibonacci = 1;//размер массива для вывода
	int a = 0;//первый в последовательности
	int b = 1;//следующий
	int c = 0;//следующий за следующим
	for (; ;)//узнаем размер массива для Фибоначчи
	{
		if (b < lim_num_fibonacci)
		{
			c = a + b; size_fibonacci++;
		} else break; 
		if (c < lim_num_fibonacci)
		{
			a = b + c; size_fibonacci++;
		} else break;
		if (a < lim_num_fibonacci)
		{
			b = a + c; size_fibonacci++;
		} else break;
	}
	 
	long long* Fibonacci = new long long[size_fibonacci];//динамич массив для ряда Фибоначчи
	for (int i=0; i<size_fibonacci; i++)//заполнение массива числами из ряда Фибоначчи
	{
		if (i == 0) Fibonacci[0] = 0;
		else if (i == 1) Fibonacci[1] = 1;
		else Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2]; 
	}
	for (int i = 0; i < size_fibonacci; i++)//вывод на экран
	{
		cout << Fibonacci[i] << "\t";
	}
	cout << endl; 
	delete[] Fibonacci; 
#endif
}
