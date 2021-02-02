#include "functions.h"

////////////////////////////////////////////// <Print>
template<typename T>void Print(T arr[], const int n)
{
	cout << endl << typeid(T).name() << "\tМассив" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}
}

template<typename T>void Print(T arr[ROWS][COLS], const int n, const int m)
{
	cout << endl << typeid(T).name() << "\tМатрица" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << '\t';
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
}

///////////////////////////////////////////// <Sort>
template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		T buffer = 0;
		for (int j = i; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}


template<typename T>void Sort(T arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		T buffer = 0;

		for (int j = 0; j < m; j++)
		{
			for (int j2 = j, i2 = i; i2 < m; j2++)
			{
				if (j2 == m)
				{
					j2 = 0;
					i2++;
				}

				if (arr[i][j] > arr[i2][j2] && i2 != n)
				{
					buffer = arr[i][j];
					arr[i][j] = arr[i2][j2];
					arr[i2][j2] = buffer;
				}
			}
		}
	}
}



