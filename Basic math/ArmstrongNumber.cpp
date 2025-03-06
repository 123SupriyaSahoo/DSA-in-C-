#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int originalnum, digit, count = 0, sum = 0;
    int temp = n;
    originalnum = n;

    while (temp > 0) {
        temp /= 10;
        count++;
    }

    temp = n; 
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == originalnum) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not Armstrong Number" << endl;
    }

    return 0;
}
     
