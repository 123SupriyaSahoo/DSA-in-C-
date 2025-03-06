#include <iostream>
using namespace std;

int check_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (check_prime(i))
        {
            sum += i;
        }
    }
    cout << "The sum of prime numbers from 1 to " << n << " is " << sum;
}