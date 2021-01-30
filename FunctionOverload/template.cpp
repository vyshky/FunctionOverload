#include "functions.h"

////////////////////////////////////////////// <Print>
template<typename T>void Print(T arr[], const int n)
{
	cout << "INT\t";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}
}

template<typename T>void Print(T arr[ROWS][COLS], const int n, const int m)
{
	cout << "CHAR\tМатрица" << endl;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		cout << '\t';
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	setlocale(LC_ALL, "rus");
}

///////////////////////////////////////////// <Sum>