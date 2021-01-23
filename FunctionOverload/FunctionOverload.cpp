#include <iostream>

using namespace std;

const int SIZE = 10;
const int ROWS = 3;
const int COLS = 3;

#define Mnogo_ravno cout<<endl<<"==============================================================================================="<<endl<<endl<<endl;

/// <Случайные числа записываем в массив>
void FillRand(int arr[], const int n);                               //
void FillRand(double arr[], const int n);                            // Однострочный массив
void FillRand(char arr[], const int n);                              //  

void FillRand(int arr[ROWS][COLS], const int n, const int m);        //       
void FillRand(double arr[ROWS][COLS], const int n, const int m);     // Двумерный массив
void FillRand(char arr[ROWS][COLS], const int n, const int m);       //

void FillRand(int arr1[ROWS][COLS], int arr2[ROWS][COLS], const int n, const int m);             //
void FillRand(double arr1[ROWS][COLS], double arr2[ROWS][COLS], const int n, const int m);       // Сумма 2 матриц 
void FillRand(char arr1[ROWS][COLS], char arr2[ROWS][COLS], const int n, const int m);           // 
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

/// <Печать> показать в консоли
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

void Print(int arr3[ROWS][COLS], const int n, const int m);
void Print(double arr3[ROWS][COLS], const int n, const int m);
void Print(char arr3[ROWS][COLS], const int n, const int m);
/// <Print>

void main()
{
	setlocale(LC_ALL, "rus");

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "СОРТИРОВКА" << endl << "--------------------" << endl;
	int arrA[SIZE], arrA2[ROWS][COLS];
	FillRand(arrA, SIZE);
	FillRand(arrA2, ROWS, COLS);
	Sort(arrA, SIZE);
	Sort(arrA2, ROWS, COLS);
	Print(arrA, SIZE);	cout << endl;
	Print(arrA2, ROWS, COLS);
	Mnogo_ravno;

	double arrD[SIZE], arrD2[ROWS][COLS];
	FillRand(arrD, SIZE);
	FillRand(arrD2, ROWS, COLS);
	Sort(arrD, SIZE);
	Sort(arrD2, ROWS, COLS);
	Print(arrD, SIZE); cout << endl;
	Print(arrD2, ROWS, COLS);
	Mnogo_ravno;

	char arrC[SIZE], arrC2[ROWS][COLS];
	FillRand(arrC, SIZE);
	FillRand(arrC2, ROWS, COLS);
	Sort(arrC, SIZE);
	Sort(arrC2, ROWS, COLS);
	Print(arrC, SIZE); cout << endl;
	Print(arrC2, ROWS, COLS);
	Mnogo_ravno;

	system("pause");
	system("CLS");

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Сумма 2 матриц" << endl << "---------------------" << endl;
	int arr1[ROWS][COLS], arr2[ROWS][COLS], arr3[ROWS][COLS];
	FillRand(arr1, arr2, ROWS, COLS);
	Sort(arr1, ROWS, COLS);
	Sort(arr2, ROWS, COLS);
	Sum(arr1, arr2, arr3, ROWS, COLS);
	Print(arr1, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	Print(arr3, ROWS, COLS);
	Mnogo_ravno;

	double arr11[ROWS][COLS], arr22[ROWS][COLS], arr33[ROWS][COLS];
	FillRand(arr11, arr22, ROWS, COLS);
	Sort(arr11, ROWS, COLS);
	Sort(arr22, ROWS, COLS);
	Sum(arr11, arr22, arr33, ROWS, COLS);
	Print(arr11, ROWS, COLS);
	Print(arr22, ROWS, COLS);
	Print(arr33, ROWS, COLS);
	Mnogo_ravno;

	char arr111[ROWS][COLS], arr222[ROWS][COLS], arr333[ROWS][COLS];
	FillRand(arr111, arr222, ROWS, COLS);
	Sort(arr111, ROWS, COLS);
	Sort(arr222, ROWS, COLS);
	Sum(arr111, arr222, arr333, ROWS, COLS);
	Print(arr111, ROWS, COLS);
	Print(arr222, ROWS, COLS);
	Print(arr333, ROWS, COLS);
	Mnogo_ravno;

	system("pause");
	system("CLS");

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Среднее арифметическое однострочного массива" << endl << "---------------------" << endl;
	int arr112[SIZE];
	FillRand(arr112, SIZE);
	Print(arr112, SIZE);
	Avg(arr112, SIZE);
	Mnogo_ravno;

	double arr113[SIZE];
	FillRand(arr113, SIZE);
	Print(arr113, SIZE);
	Avg(arr113, SIZE);
	Mnogo_ravno;

	char arr114[SIZE];
	FillRand(arr114, SIZE);
	Print(arr114, SIZE);
	Avg(arr114, SIZE);
	Mnogo_ravno;

	system("pause");
	system("CLS");

	cout << "Среднее арифметическое двумерного массива" << endl << "---------------------" << endl;

	int arr1111[ROWS][COLS];
	FillRand(arr1111, ROWS, COLS);
	Print(arr1111, ROWS, COLS);
	Avg(arr1111, ROWS, COLS);
	Mnogo_ravno;

	double arr1112[ROWS][COLS];
	FillRand(arr1112, ROWS, COLS);
	Print(arr1112, ROWS, COLS);
	Avg(arr1112, ROWS, COLS);
	Mnogo_ravno;

	char arr1113[ROWS][COLS];
	FillRand(arr1113, ROWS, COLS);
	Print(arr1113, ROWS, COLS);
	Avg(arr1113, ROWS, COLS);
	Mnogo_ravno;

	system("pause");
	system("CLS");

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	cout << "Минимальное значение в однострочном массиве" << endl << "----------------------------------" << endl;
	int arrMin_int[SIZE];
	FillRand(arrMin_int, SIZE);
	Print(arrMin_int, SIZE);
	minValueIn(arrMin_int, SIZE);
	Mnogo_ravno;

	double arrMin_double[SIZE];
	FillRand(arrMin_double, SIZE);
	Print(arrMin_double, SIZE);
	minValueIn(arrMin_double, SIZE);
	Mnogo_ravno;

	char arrMin_char[SIZE];
	FillRand(arrMin_char, SIZE);
	Print(arrMin_char, SIZE);
	minValueIn(arrMin_char, SIZE);
	Mnogo_ravno;

	system("pause");
	system("CLS");
	cout << "Минимальное значение в двумерном массиве" << endl << "-----------------------------------" << endl;
	int arrMinMatrix_int[ROWS][COLS];
	FillRand(arrMinMatrix_int, ROWS, COLS);
	Print(arrMinMatrix_int, ROWS, COLS);
	minValueIn(arrMinMatrix_int, ROWS, COLS);
	Mnogo_ravno;

	double arrMinMatrix_double[ROWS][COLS];
	FillRand(arrMinMatrix_double, ROWS, COLS);
	Print(arrMinMatrix_double, ROWS, COLS);
	minValueIn(arrMinMatrix_double, ROWS, COLS);
	Mnogo_ravno;

	char arrMinMatrix_char[ROWS][COLS];
	FillRand(arrMinMatrix_char, ROWS, COLS);
	Print(arrMinMatrix_char, ROWS, COLS);
	minValueIn(arrMinMatrix_char, ROWS, COLS);
	Mnogo_ravno;

	system("pause");
	system("CLS");

	cout << "Максимальное значение в однострочном массиве" << endl << "----------------------------------" << endl;
	int arrMax_int[SIZE];
	FillRand(arrMax_int, SIZE);
	Print(arrMax_int, SIZE);
	MaxValueIn(arrMax_int, SIZE);
	Mnogo_ravno;

	double arrMax_double[SIZE];
	FillRand(arrMax_double, SIZE);
	Print(arrMax_double, SIZE);
	MaxValueIn(arrMax_double, SIZE);
	Mnogo_ravno;

	char arrMax_char[SIZE];
	FillRand(arrMax_char, SIZE);
	Print(arrMax_char, SIZE);
	MaxValueIn(arrMax_char, SIZE);
	Mnogo_ravno;

	system("pause");
	system("CLS");

	cout << "Максимальное значение в двумерном массиве" << endl << "-----------------------------------" << endl;

	int arrMaxMatrix_int[ROWS][COLS];
	FillRand(arrMaxMatrix_int, ROWS, COLS);
	Print(arrMaxMatrix_int, ROWS, COLS);
	MaxValueIn(arrMaxMatrix_int, ROWS, COLS);
	Mnogo_ravno;

	double arrMaxMatrix_double[ROWS][COLS];
	FillRand(arrMaxMatrix_double, ROWS, COLS);
	Print(arrMaxMatrix_double, ROWS, COLS);
	MaxValueIn(arrMaxMatrix_double, ROWS, COLS);
	Mnogo_ravno;

	char arrMaxMatrix_char[ROWS][COLS];
	FillRand(arrMaxMatrix_char, ROWS, COLS);
	Print(arrMaxMatrix_char, ROWS, COLS);
	MaxValueIn(arrMaxMatrix_char, ROWS, COLS);
	Mnogo_ravno;
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

void FillRand(int arr1[ROWS][COLS], int arr2[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr1[i][j] = rand() % 100;
			arr2[i][j] = rand() % 100;
		}
	}
}

void FillRand(double arr1[ROWS][COLS], double arr2[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr1[i][j] = rand() % 100;
			arr1[i][j] /= 10;
			arr2[i][j] = rand() % 100;
			arr2[i][j] /= 10;
		}
	}
}

void FillRand(char arr1[ROWS][COLS], char arr2[ROWS][COLS], const int n, const int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr1[i][j] = rand() % 256;
			arr2[i][j] = rand() % 256;
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

