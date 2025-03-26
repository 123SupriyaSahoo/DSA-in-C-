#include<iostream>
using namespace std;

int BS(int arr[], int st, int end, int tar) {
    if (st <= end) {
        int mid = st + (end - st) / 2;
        if (tar > arr[mid]) {
            return BS(arr, mid + 1, end, tar);
        } else if (tar < arr[mid]) {
            return BS(arr, st, mid - 1, tar);
        } else {
            return mid;
        }
    }
    return -1; // Element not found
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements (in sorted order): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;

    int index = BS(arr, 0, n - 1, key);
    if (index != -1) {
        cout << "The element " << key << " found at index " << index << endl;
    } else {
        cout << "The element " << key << " is not found in the array." << endl;
    }

    return 0;
}
