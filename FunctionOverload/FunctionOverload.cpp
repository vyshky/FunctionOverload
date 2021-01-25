#include "functions.h"
void main()
{
	setlocale(LC_ALL, "rus");
#ifdef SORT

	cout << "СОРТИРОВКА" << endl << "--------------------" << endl;
	char arrA[SIZE], arrA2[ROWS][COLS];
	FillRand<char>(arrA, SIZE);
	FillRand<char>(arrA2, ROWS, COLS);
	Sort<char>(arrA, SIZE);
	Sort<char>(arrA2, ROWS, COLS);
	Print<char>(arrA, SIZE);	cout << endl;
	Print<char>(arrA2, ROWS, COLS);	cout << endl;
	Mnogo_ravno;

	system("pause");
	system("CLS");

#endif //SORT


#ifdef SUM

	cout << "Сумма 2 матриц" << endl << "---------------------" << endl;
	int arr1[ROWS][COLS], arr2[ROWS][COLS], arr3[ROWS][COLS];
	FillRand<int>(arr1, ROWS, COLS);
	FillRand<int>(arr2, ROWS, COLS);
	Sort<int>(arr1, ROWS, COLS);
	Sort<int>(arr2, ROWS, COLS);
	Sum<int>(arr1, arr2, arr3, ROWS, COLS);
	Print<int>(arr1, ROWS, COLS);
	Print<int>(arr2, ROWS, COLS);
	Print<int>(arr3, ROWS, COLS);
	Mnogo_ravno;


	system("pause");
	system("CLS");
#endif // SUM


#ifdef AVG
	cout << "Среднее арифметическое однострочного массива" << endl << "---------------------" << endl;

	int arr112[SIZE];
	FillRand<int>(arr112, SIZE);
	Print<int>(arr112, SIZE);
	Avg<int>(arr112, SIZE);
	Mnogo_ravno;


	system("pause");
	system("CLS");

	cout << "Среднее арифметическое двумерного массива" << endl << "---------------------" << endl;

	double arr1111[ROWS][COLS];
	FillRand<double>(arr1111, ROWS, COLS);
	Print<double>(arr1111, ROWS, COLS);
	Avg<double>(arr1111, ROWS, COLS);
	Mnogo_ravno;


	system("pause");
	system("CLS");
#endif // AVG



#ifdef ARR_MIN_MAX
	cout << "Минимальное значение в однострочном массиве" << endl << "----------------------------------" << endl;
	char arrMin[SIZE];
	FillRand<char>(arrMin, SIZE);
	Print<char>(arrMin, SIZE);
	minValueIn<char>(arrMin, SIZE);
	Mnogo_ravno;

	cout << "Максимальное значение в однострочном массиве" << endl << "----------------------------------" << endl;
	char arrMax[SIZE];
	FillRand<char>(arrMax, SIZE);
	Print<char>(arrMax, SIZE);
	MaxValueIn<char>(arrMax, SIZE);
	Mnogo_ravno;

	system("pause");
	system("CLS");
#endif // ARR_MIN_MAX


#ifdef MATRIX_MIN_MAX
	cout << "Минимальное значение в двумерном массиве" << endl << "-----------------------------------" << endl;
	char arrMinMatrix[ROWS][COLS];
	FillRand<char>(arrMinMatrix, ROWS, COLS);
	Print<char>(arrMinMatrix, ROWS, COLS);
	minValueIn<char>(arrMinMatrix, ROWS, COLS);
	Mnogo_ravno;

	cout << "Максимальное значение в двумерном массиве" << endl << "-----------------------------------" << endl;

	char arrMaxMatrix[ROWS][COLS];
	FillRand<char>(arrMaxMatrix, ROWS, COLS);
	Print<char>(arrMaxMatrix, ROWS, COLS);
	MaxValueIn<char>(arrMaxMatrix, ROWS, COLS);
	Mnogo_ravno;

	system("pause");
	system("CLS");

#endif // MATRIX_MIN_MAX


}

