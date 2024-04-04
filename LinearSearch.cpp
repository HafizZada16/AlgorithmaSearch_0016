#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int employeeID) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == employeeID) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int n;

    cout << "Enter the number of employees: ";
    cin >> n;

    int arr[20];

    cout << "Enter employee IDs:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int employeeID;
    cout << "Enter the employee ID to search: ";
    cin >> employeeID;

    int index = linearSearch(arr, n, employeeID);

    if (index == -1) {
        cout << "Employee not found." << endl;
    } else {
        cout << "Employee found at index " << index << "." << endl;
    }

    return 0;
}
