#include <iostream>

using namespace std;

const int SIZE = 10;
const int ROWS = 3;
const int COLS = 3;

#define Mnogo_ravno cout<<endl<<"==============================================================================================="<<endl<<endl<<endl;

/// <��������� ����� ���������� � ������>
void FillRand(int arr[], const int n);                               //
void FillRand(double arr[], const int n);                            // ������������ ������
void FillRand(char arr[], const int n);                              //  

void FillRand(int arr[ROWS][COLS], const int n, const int m);        //       
void FillRand(double arr[ROWS][COLS], const int n, const int m);     // ��������� ������
void FillRand(char arr[ROWS][COLS], const int n, const int m);       //

void FillRand(int arr1[ROWS][COLS], int arr2[ROWS][COLS], const int n, const int m);             //
void FillRand(double arr1[ROWS][COLS], double arr2[ROWS][COLS], const int n, const int m);       // ����� 2 ������ 
void FillRand(char arr1[ROWS][COLS], char arr2[ROWS][COLS], const int n, const int m);           // 
/// </FillRand>

/// <���������� �� �����������>
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

void Sort(int arr[ROWS][COLS], const int n, const int m);
void Sort(double arr[ROWS][COLS], const int n, const int m);
void Sort(char arr[ROWS][COLS], const int n, const int m);
/// </Sort>

/// <����� 2 ������> 
void Sum(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int arr3[ROWS][COLS], int const n, int const m);
void Sum(double arr1[ROWS][COLS], double arr2[ROWS][COLS], double arr3[ROWS][COLS], int const n, int const m);
void Sum(char arr1[ROWS][COLS], char arr2[ROWS][COLS], char arr3[ROWS][COLS], int const n, int const m);
/// <Sum>

/// <������� ��������������> 
void Avg(int arr[], const int n);
void Avg(double arr[], const int n);
void Avg(char arr[], const int n);

void Avg(int arr[ROWS][COLS], const int n, const int m);
void Avg(double arr[ROWS][COLS], const int n, const int m);
void Avg(char arr[ROWS][COLS], const int n, const int m);
/// <Avg>

/// <����� ����������� �������� � �������> 
void minValueIn(int arr[], const int n);
void minValueIn(double arr[], const int n);
void minValueIn(char arr[], const int n);

void minValueIn(int arr[ROWS][COLS], const int n, const int m);
void minValueIn(double arr[ROWS][COLS], const int n, const int m);
void minValueIn(char arr[ROWS][COLS], const int n, const int m);
/// <MinValueIn>


/// <����� ������������ �������� � �������> 
void MaxValueIn(int arr[], const int n);
void MaxValueIn(double arr[], const int n);
void MaxValueIn(char arr[], const int n);

void MaxValueIn(int arr[ROWS][COLS], const int n, const int m);
void MaxValueIn(double arr[ROWS][COLS], const int n, const int m);
void MaxValueIn(char arr[ROWS][COLS], const int n, const int m);
/// <MaxValueIn>

/// <������> �������� � �������
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);

void Print(int arr3[ROWS][COLS], const int n, const int m);
void Print(double arr3[ROWS][COLS], const int n, const int m);
void Print(char arr3[ROWS][COLS], const int n, const int m);
/// <Print>
