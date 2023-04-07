#include <iostream>
using namespace std;

int arr[78];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array :";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 0" << endl;
	}

	cout << "\n------------------" << endl;
	cout << "\nEnter Array Elment" << endl;
	