#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;
#endif

	const int n = 5;
	int arr[n] = {3, 5, 8, 13, 21};
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;

	//int* pb;
	//int b = 3;
	//*pb = &b;
}