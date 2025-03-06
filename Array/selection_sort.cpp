#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { 
        int minindex = i;  
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] < arr[minindex]) {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]); 
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; 
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n); 

    return 0;
}
