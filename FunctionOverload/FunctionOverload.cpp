#include "functions.h"
#include "template.cpp"




void main()
{
	setlocale(LC_ALL, "rus");
	int arr[SIZE];

	FillRand(arr, SIZE);
	Print<int>(arr, SIZE);	
}
