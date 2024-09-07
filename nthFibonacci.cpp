#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n; // Base cases: F(0) = 0, F(1) = 1
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b; // Calculate the next Fibonacci number
        a = b;     // Move one step forward in the sequence
        b = c;     // Move one step forward in the sequence
    }
    return b;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int result = fibonacci(n);
    cout << "The " << n << "th term in the Fibonacci series is: " << result << endl;

    return 0;
}
