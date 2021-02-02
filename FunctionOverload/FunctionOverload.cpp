#include "functions.h"
#include "template.cpp"




void main()
{
	setlocale(LC_ALL, "rus");
	char arr[SIZE],arr2[ROWS][COLS];

	FillRand(arr, SIZE);
	FillRand(arr2, ROWS, COLS);

	Sort(arr, SIZE);
	Print(arr, SIZE);

	Print(arr2, ROWS, COLS);
	Sort(arr2, ROWS,COLS);
	Print(arr2, ROWS, COLS);
}
