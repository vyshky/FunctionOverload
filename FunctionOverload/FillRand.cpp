#include "functions.h"

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