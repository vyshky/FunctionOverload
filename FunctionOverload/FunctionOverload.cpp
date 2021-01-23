#include "functions.h"



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
