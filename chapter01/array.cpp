#include <iostream>

using namespace std;

void copy_fct()
{
	int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int v2[10];

	for (auto i = 0; i != 10; ++i)
		v2[i] = v1[i];

	for (auto i = 0; i != 10; ++i)
		cout << i << ' ';
	cout << '\n';
}

void print()
{
	int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (auto x : v)
		cout << x << '\n';

	for (auto x : {10, 20, 30, 40, 50})
		cout << x << '\n';
}

void increment()
{
	int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (auto& x : v)
		++x;

	cout << "After: ";

	for (auto x : v)
		cout << x << ' ';
	cout << '\n';
}

int main()
{
	copy_fct();
	print();
	increment();
}
