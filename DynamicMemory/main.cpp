#include <iostream>
using namespace std;

#define tab "\tab"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	// new
	int n = 5;
	cout << "������� ������ �������: "; cin >> n;
	int * arr = new int[n];
	FillRand(arr, n);
	Print(arr, n);

	cout << endl;

	delete[] arr;

	void FillRand(int arr[], const int n);
	{
		for (int i = 0; i < n; i++)
		{
			*(arr + i) = rand() % 100;
		}
	}

	void Print(int arr[], const int n);
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
	}
}