#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n;       // Number of elements in the array
int i;       // Index of array element

void input() {
	while (true)
	{
		cout << "Enter the Number of Elements in the array: ";
		cin >> n;

		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 element.\n\n";
	}

    // Accept array elements
	cout << "\n-------------------\n" << endl;
	cout << "Enter Array Element\n" << endl;
	cout << "-------------------\n" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void LinearSearch() {

    char ch;
    int ctr; // Number of comparisons
    int item;

    do
    {
        // Accept the number to be searched
        cout << "\nEnter the element you want to search: "; // step 1
        cin >> item;

        ctr = 0;
        i = 0; // step 2
        while (i < n) // step 3
        {
           ctr++;
           if (arr[i] == item)
           {
                cout << "\n" << item << " found at position " << (i + 1) << endl;
                break;
           } 
           i++; // step 4
        }

        if (i == n) // step 5 
            cout << "\n" << item << " not found in the array\n";
        cout << "\nNumber of comparisons: " << ctr << endl;
        
        cout << "\nContinue search (y/n): ";
        cin >> ch;

    } while ((ch == 'y') || (ch == 'Y'));
    
}

void display()
{
    cout << "Array elements are: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    input();
    LinearSearch();
    display();
}