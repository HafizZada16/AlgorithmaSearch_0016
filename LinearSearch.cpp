#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input() {
	while (true)
	{
		cout << "Enter the Number of Elements in the array : ";
		cin >> n;

		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 element" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void LinearSearch() {

    char ch;
    int ctr;
    int item;
}