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

		if (n <= 78)
			break;
		else
			cout << "\nMaksimum panjang array adalah 0" << endl;
	}

	cout << "\n------------------" << endl;
	cout << "\nEnter Array Elment" << endl;
	cout << "\n------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void merge() {
	while (true)
	{
		cout << "Masukkan panjang element array: ";
		cin >> n;

		if (n <= 78)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}
	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 78 / 2) << ">";
		cin >> arr[i];
	}
}

void display() {
	cout << "\------------------" << endl;
	cout << "Sorted Array" << endl;
	cout << "-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n\nNumber of comparisions: " << cmp_count << endl;
	cout << "Number of Data movements: " << mov_count << endl;
}

int main()
{
	input();
	q_short(0, n - 1);
	display();
	system("pause");

	return 0;
}
