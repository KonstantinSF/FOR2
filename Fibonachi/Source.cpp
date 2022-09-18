#include <iostream>
using namespace std; 

void main()
{
	setlocale(LC_ALL, ""); 
	int limit_num_fibbonacci; 
	cout << "Введите предел, до которого хотите увидеть ряд Фибоначчи:"; cin >> limit_num_fibbonacci; 
	int* Fibonacci = new int[limit_num_fibbonacci];
	for (int i = 0; i < limit_num_fibbonacci; i++)
	{
		if (i==0) Fibonacci[0] = 0; 
		else if (i==1) Fibonacci[1] = 1; 
		else Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];
	}
	for (int i = 0; i < limit_num_fibbonacci; i++)
	{
		cout << Fibonacci[i] << "\t"; 
	}
	cout << endl; 
	delete[] Fibonacci; 


}
