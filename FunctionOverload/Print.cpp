#include "functions.h"


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
void Print(int arr[], const int n)
{
	cout << "INT\t";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}
}

void Print(double arr[], const int n)
{
	cout << "DOUBLE\t";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}
}

void Print(char arr[], const int n)
{
	cout << "CHAR\t";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}
	setlocale(LC_ALL, "rus");
}

void Print(int arr3[ROWS][COLS], const int n, const int m)
{
	cout << "INT\tМатрица" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << '\t';
		for (int j = 0; j < m; j++)
		{
			cout << arr3[i][j] << '\t';
		}
		cout << endl;
	}
}

void Print(double arr3[ROWS][COLS], const int n, const int m)
{
	cout << "DOUBLE\tМатрица" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << '\t';
		for (int j = 0; j < m; j++)
		{
			cout << arr3[i][j] << '\t';
		}
		cout << endl;
	}
}

void Print(char arr3[ROWS][COLS], const int n, const int m)
{
	cout << "CHAR\tМатрица" << endl;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		cout << '\t';
		for (int j = 0; j < m; j++)
		{
			cout << arr3[i][j] << '\t';
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

