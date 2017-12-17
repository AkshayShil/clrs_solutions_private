#include <iostream>

using namespace std;

int n = 0;

void print(int *a)
{
	for(int i = 0; i != 3; i++)
		cout << a[i] << "  ";
	cout << endl;
}

int main()
{
	int a[] = {1,3,5};
	print(a);
	
	int n = sizeof(a)/sizeof(a[0]);
	cout << n << endl;

	for (int j = 1; j < n; j++)
	{
		int key = a[j];
		int i = j - 1;

		while(i >= 0 && key > a[i])
		{
			a[i+1] = a[i];
			i--;
		}
		a[i+1]  = key;
	}

	print(a);

	return 0;
}
