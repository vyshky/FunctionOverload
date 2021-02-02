#include "functions.h"
#include "template.cpp"




void main()
{
	setlocale(LC_ALL, "rus");
	double arr[SIZE],arr2[ROWS][COLS];

	FillRand(arr, SIZE);
	FillRand(arr2, ROWS, COLS);

	Sort<double>(arr, SIZE);
	Print<double>(arr, SIZE);

	Print<double>(arr2, ROWS, COLS);
	Sort<double>(arr2, ROWS,COLS);
	Print<double>(arr2, ROWS, COLS);
}
