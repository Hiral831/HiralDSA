#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;  // Assume the number is prime initially

    cout << "Enter number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;  // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) {  // Check for divisors from 2 to num/2
            if (num % i == 0) {  // If num is divisible by i
                isPrime = false;  // num is not prime
                break;  // No need to check further
            }
        }
    }

    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
