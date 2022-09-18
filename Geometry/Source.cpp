#include <iostream>
using namespace std;
//#define SQARE
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
//#define TRIANGLE4
//#define ROMB
//#define ROMB1
//#define ROMB2
//#define DIF_SQARE
//#define CHESS
#define DIF_SQARE1
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите размер фигуры : "; cin >> n;
#ifdef SQARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef TRIANGLE1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef TRIANGLE2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef TRIANGLE3
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < i; k++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif
#ifdef TRIANGLE4
	for (int i = 0; i < n; i++)
	{
		for (int k = n-1; k > i; k--)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif
#ifdef ROMB
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i+j==5)cout << "/";
			else cout << " ";
		}
		for (int j = 0; j <= n; j++)
		{
			if (j == i)cout << "\\";
			else cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (j - i==1)cout << "\\";
			else cout << " ";
		}
		for (int j = 0; j <= n; j++)
		{
			if (i + j == 4)cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
#endif
#ifdef ROMB1
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";cout << "/";
		for (int j = 0; j < i; j++)cout << "  ";cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n-1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif
#ifdef ROMB2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < 2 * i; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - i - 1) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif
#ifdef DIF_SQARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int sum_iteration = i + j;
			if (sum_iteration%2==0)cout << "+";
			else cout << "-";
		}
		cout << endl;
	}
#endif
#ifdef CHESS
	setlocale(LC_ALL, "C");
	/*for (int i = 0; i < 256; i++)
	{
		if (i % 10 == 0) cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;*/
	for (int i = 0; i < 2*n+2; i++)cout << "_";
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "|"; 
		for (int j = 0; j < n; j++)
		{
			char black_sqare = 178;
			if ((i + j) % 2 == 0)cout << black_sqare<< black_sqare;
			else cout << "  ";
		}
		cout << "|"; 
		cout << endl;
	}
	for (int i = 0; i < 2 * n + 2; i++)cout << "'";
	cout << endl;
#endif
#ifdef DIF_SQARE1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i+j) % 2 == 0)cout << "+ ";else cout << "- ";
			//(i+j) % 2 == 0?cout << "+ ": cout << "- ";
			//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
			cout << ((i + j) % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif
}