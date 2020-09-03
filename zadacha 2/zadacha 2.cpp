#include <iostream>
#include <string>
using namespace std;
int main()
{
	int arr[20];
	int broi = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if (i > 0 && arr[i] % i != 0)
		{
			cout << arr[i] << " ";
			broi++;
		}
	}

	cout << endl << broi;
}
