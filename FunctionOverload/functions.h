#include <iostream>
using namespace std;

const int SIZE = 10;
const int ROWS = 3;
const int COLS = 3;

#define Mnogo_ravno cout<<endl<<"==============================================================================================="<<endl<<endl<<endl;
//#define SORT
//#define SUM
//#define AVG
//#define ARR_MIN_MAX
//#define MATRIX_MIN_MAX

/// <Случайные числа записываем в массив>
template<class T>
void FillRand(T arr[], const int n)
{

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

template<class T>
void FillRand(T arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
/// </FillRand>

/// <Сортировка по возрастанию>
template<class T>
void Sort(T arr[], const int n)
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

template<class T>
void Sort(T arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		T buffer = 0;
		for (int j = 0; j < m; j++)
		{
			for (int j2 = j; j2 < m; j2++)
			{
				if (arr[i][j] > arr[i][j2])
				{
					buffer = arr[i][j];
					arr[i][j] = arr[i][j2];
					arr[i][j2] = buffer;
				}
			}
		}
	}
}
/// </Sort>

/// <Сумма 2 матриц> 
template<class T>
void Sum(T arr1[ROWS][COLS], T arr2[ROWS][COLS], T arr3[ROWS][COLS], int const n, int const m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}
/// <Sum>

/// <Среднее арифметическое> 
template<class T>
void Avg(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << endl << typeid(sum).name() << " AVG = " << sum / SIZE << endl;


}

template<class T>
void Avg(T arr[ROWS][COLS], const int n, const int m)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << typeid(sum).name() << " AVG = " << sum / (ROWS * COLS) << endl;
}
/// <Avg>

/// <Найти минимальное значение в массиве> 
template<class T>
void minValueIn(T arr[], const int n)
{
	T bufer = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (bufer > arr[i])
		{
			bufer = arr[i];
		}
	}
	cout << typeid(T).name() << " minValueIn = ";
	setlocale(LC_ALL, "C");
	cout << bufer << endl;
	setlocale(LC_ALL, "rus");
}
template<class T>
void minValueIn(T arr[ROWS][COLS], const int n, const int m)
{
	T bufer = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (bufer > arr[i][j])
			{
				bufer = arr[i][j];
			}
		}
	}
	cout << typeid(T).name() << " minValueIn = ";
	setlocale(LC_ALL, "C");
	cout << bufer << endl;
	setlocale(LC_ALL, "rus");
}
/// <MinValueIn>


/// <Найти максимальное значение в массиве> 
template<class T>
void MaxValueIn(T arr[], const int n)
{
	T bufer = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (bufer < arr[i])
		{
			bufer = arr[i];
		}
	}
	cout << typeid(T).name() << " MaxValueIn = ";
	setlocale(LC_ALL, "C");
	cout << bufer << endl;
	setlocale(LC_ALL, "rus");
}

template<class T>
void MaxValueIn(T arr[ROWS][COLS], const int n, const int m)
{
	T bufer = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (bufer < arr[i][j])
			{
				bufer = arr[i][j];
			}
		}
	}
	cout << typeid(T).name() << " MaxValueIn = ";
	setlocale(LC_ALL, "C");
	cout << bufer << endl;
	setlocale(LC_ALL, "rus");
}
/// <MaxValueIn>

/// <Принт> показать в консоли
template<class T>
void Print(T arr[], const int n)
{

	cout << typeid(T).name() << "\tМассив" << endl;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}
	setlocale(LC_ALL, "rus");
}

template<class T>
void Print(T arr[ROWS][COLS], const int n, const int m)
{

	cout << typeid(T).name() << "\tМатрица" << endl;
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
/// <Print>
