#include <iostream>
using namespace std;
//#define TABLITSA
#define PIFAGOR_TAB
void main ()
{

#ifdef PIFAGOR_TAB
	int result = 1;
	for (int i = 0; i < 10; i++)cout << i << "   ";//����� �������� ������� ����������
	cout << endl << "-------------------------------------" << endl;//����������� ����. ��������� �� �������
	for (int i = 1; i <= 9; i++)//���� �� ���������
	{
		cout << i<< "|  ";//����� �������� ����� ��������� � ������������
		for (int j = 1; j <= 9; j++)//���� �� �����������
		{
		result = i * j;
		cout << result << "  ";//���������� ����� ������� �������
		if (result < 10)cout << " ";//���������� ��������� ��� ����������� ���� (������������)
		if (j == 9)cout << endl;//����� 9 �������� � ������ ���� ������� ����
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