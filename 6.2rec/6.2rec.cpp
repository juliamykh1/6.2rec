#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

void Create(int mas[], const int n, const int Low, const int High, int i)
{
	mas[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		Create(mas, n, Low, High, i + 1);
}

void Print(int mas[], const int n, int i)
{
	cout << mas[i] << " ";
	if (i < n - 1)
		Print(mas, n, i + 1);
}


int Max(int mas[], const int n, int i, int max)
{
	if (mas[i] > max)
		max = mas[i];
	if (i < n - 1)
		return Max(mas, n, i + 1, max);
	else
		return max;
}

int Min(int mas[], const int n, int i, int min)
{
	if (mas[i] < min)
		min = mas[i];
	if (i < n - 1)
		return Min(mas, n, i + 1, min);
	else
		return min;
}

int main()
{
	srand((unsigned)time(NULL));

	const int k = 10;
	int a[k];

	int Low = -5;
	int High = 5;

	Create(a, k, Low, High, 0);

	cout << "a[ ";
	Print(a, k, 0);
	cout << "]" << endl;

	cout << "Min = " << Min(a, k, 1, a[0]) << endl;
	cout << "Max = " << Max(a, k, 1, a[0]) << endl;
	cout << "arithmetic mean = " << (Max(a, k, 1, a[0])
		+ Min(a, k, 1, a[0])) / 2. << endl;

	return 0;
}
