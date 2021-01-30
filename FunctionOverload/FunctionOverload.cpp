#include <iostream>

using namespace std;

const int SIZE = 10;
const int ROWS = 3;
const int COLS = 3;

#define Mnogo_ravno cout<<endl<<"==============================================================================================="<<endl<<endl<<endl;

/// <Печать> показать в консоли

template<typename T>void Print(T arr[], const int n);

template<typename T>void Print(T arr3[ROWS][COLS], const int n, const int m);

/// <Print>

/// <Случайные числа записываем в массив>
void FillRand(int arr[], const int n);                               
void FillRand(double arr[], const int n);                            
void FillRand(char arr[], const int n);                              

void FillRand(int arr[ROWS][COLS], const int n, const int m);            
void FillRand(double arr[ROWS][COLS], const int n, const int m);     
void FillRand(char arr[ROWS][COLS], const int n, const int m);       

/// </FillRand>

/// <Сортировка по возрастанию>
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

void Sort(int arr[ROWS][COLS], const int n, const int m);
void Sort(double arr[ROWS][COLS], const int n, const int m);
void Sort(char arr[ROWS][COLS], const int n, const int m);
/// </Sort>

/// <Сумма 2 матриц> 
void Sum(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int arr3[ROWS][COLS], int const n, int const m);
void Sum(double arr1[ROWS][COLS], double arr2[ROWS][COLS], double arr3[ROWS][COLS], int const n, int const m);
void Sum(char arr1[ROWS][COLS], char arr2[ROWS][COLS], char arr3[ROWS][COLS], int const n, int const m);
/// <Sum>

/// <Среднее арифметическое> 
void Avg(int arr[], const int n);
void Avg(double arr[], const int n);
void Avg(char arr[], const int n);

void Avg(int arr[ROWS][COLS], const int n, const int m);
void Avg(double arr[ROWS][COLS], const int n, const int m);
void Avg(char arr[ROWS][COLS], const int n, const int m);
/// <Avg>

/// <Найти минимальное значение в массиве> 
void minValueIn(int arr[], const int n);
void minValueIn(double arr[], const int n);
void minValueIn(char arr[], const int n);

void minValueIn(int arr[ROWS][COLS], const int n, const int m);
void minValueIn(double arr[ROWS][COLS], const int n, const int m);
void minValueIn(char arr[ROWS][COLS], const int n, const int m);
/// <MinValueIn>


/// <Найти максимальное значение в массиве> 
void MaxValueIn(int arr[], const int n);
void MaxValueIn(double arr[], const int n);
void MaxValueIn(char arr[], const int n);

void MaxValueIn(int arr[ROWS][COLS], const int n, const int m);
void MaxValueIn(double arr[ROWS][COLS], const int n, const int m);
void MaxValueIn(char arr[ROWS][COLS], const int n, const int m);
/// <MaxValueIn>



void main()
{
	setlocale(LC_ALL, "rus");
	int arr[SIZE],arr2[ROWS][COLS];

	FillRand(arr, SIZE);
	Print<int>(arr, SIZE);	
}
/////////////////////////////////////////////// <FillRand>
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}

void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 256;
	}
}

void FillRand(int arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 100;
			arr[i][j] /= 10;
		}
	}
}

void FillRand(char arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 256;
		}
	}
}

////////////////////////////////////////////// <Sort>
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		int buffer = 0;
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

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		double buffer = 0;
		for (int j = i; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		char buffer = 0;
		for (int j = i; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		int buffer = 0;
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

void Sort(double arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		double buffer = 0;
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

void Sort(char arr[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		char buffer = 0;
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
void Sum(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int arr3[ROWS][COLS], int const n, int const m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

void Sum(double arr1[ROWS][COLS], double arr2[ROWS][COLS], double arr3[ROWS][COLS], int const n, int const m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

void Sum(char arr1[ROWS][COLS], char arr2[ROWS][COLS], char arr3[ROWS][COLS], int const n, int const m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}
///////////////////////////////////////////// <Avg>
void Avg(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << endl << sum << "/" << n << " = ";
	sum /= SIZE;
	cout << "INT AVG = " << sum;
}

void Avg(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << endl << sum << "/" << n << " = ";
	sum /= SIZE;
	cout << "DOUBLE AVG = " << sum;
}

void Avg(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << endl << (int)sum << "/" << n << " = ";
	sum /= SIZE;
	cout << "CHAR AVG = ";
	setlocale(LC_ALL, "C");
	cout << (char)sum << "(" << sum << ")";
	setlocale(LC_ALL, "rus");
}

void Avg(int arr[ROWS][COLS], const int n, const int m)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}
	sum /= ROWS * COLS;
	cout << "INT AVG = " << sum;
}

void Avg(double arr[ROWS][COLS], const int n, const int m)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}
	sum /= ROWS * COLS;
	cout << "DOUBLE AVG = " << sum;
}

void Avg(char arr[ROWS][COLS], const int n, const int m)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}
	sum /= ROWS * COLS;
	cout << "CHAR AVG = ";
	setlocale(LC_ALL, "C");
	cout << char(sum) << "(" << sum << ")";
	setlocale(LC_ALL, "rus");
}

void minValueIn(int arr[], const int n)
{
	int bufer = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (bufer > arr[i])
		{
			bufer = arr[i];
		}
	}
	cout << "INT minValueIn = " << bufer << endl;
}

void minValueIn(double arr[], const int n)
{
	double bufer = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (bufer > arr[i])
		{
			bufer = arr[i];
		}
	}
	cout << "DOUBLE minValueIn = " << bufer << endl;
}

void minValueIn(char arr[], const int n)
{
	int bufer = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (bufer > arr[i])
		{
			bufer = arr[i];
		}
	}
	cout << "CHAR minValueIn = ";
	setlocale(LC_ALL, "C");
	cout << (char)bufer << "(" << bufer << ")" << endl;
	setlocale(LC_ALL, "rus");
}

void minValueIn(int arr[ROWS][COLS], const int n, const int m)
{
	int bufer = arr[0][0];
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
	cout << "INT minValueIn = " << bufer << endl;
}

void minValueIn(double arr[ROWS][COLS], const int n, const int m)
{
	double bufer = arr[0][0];
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
	cout << "DOUBLE minValueIn = " << bufer << endl;
}

void minValueIn(char arr[ROWS][COLS], const int n, const int m)
{
	int bufer = arr[0][0];
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
	cout << "CHAR minValueIn = ";
	setlocale(LC_ALL, "C");
	cout << (char)bufer << "(" << bufer << ")" << endl;
	setlocale(LC_ALL, "rus");
}

void MaxValueIn(int arr[], const int n)
{
	int bufer = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (bufer < arr[i])
		{
			bufer = arr[i];
		}
	}
	cout << "INT MaxValueIn = " << bufer << endl;
}
void MaxValueIn(double arr[], const int n)
{
	double bufer = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (bufer < arr[i])
		{
			bufer = arr[i];
		}
	}
	cout << "DOUBLE MaxValueIn = " << bufer << endl;
}

void MaxValueIn(char arr[], const int n)
{
	int bufer = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (bufer < arr[i])
		{
			bufer = arr[i];
		}
	}
	cout << "CHAR MaxValueIn = ";
	setlocale(LC_ALL, "C");
	cout << (char)bufer << "(" << bufer << ")" << endl;
	setlocale(LC_ALL, "rus");
}

void MaxValueIn(int arr[ROWS][COLS], const int n, const int m)
{
	int bufer = arr[0][0];
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
	cout << "INT MaxValueIn = " << bufer << endl;
}

void MaxValueIn(double arr[ROWS][COLS], const int n, const int m)
{
	double bufer = arr[0][0];
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
	cout << "DOUBLE MaxValueIn = " << bufer << endl;
}

void MaxValueIn(char arr[ROWS][COLS], const int n, const int m)
{
	int bufer = arr[0][0];
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
	cout << "CHAR MaxValueIn = ";
	setlocale(LC_ALL, "C");
	cout << (char)bufer << "(" << bufer << ")" << endl;
	setlocale(LC_ALL, "rus");
}

