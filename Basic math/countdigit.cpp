#include <iostream>
#include <vector>
#include<cmath>
#include <algorithm>
using namespace std;

int countDigits(int n){
    //int cnt = 0;
    // while(n > 0){
    //     cnt = cnt + 1;
    //     n = n / 10;
    // }
    // // Return the
    // count of digits.
    int count=(int)(log10(n)+1);

    return count;
}


int main() {
    int N = 329823;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}