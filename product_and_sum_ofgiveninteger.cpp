#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    int prod = 1;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // int temp = num; // to keep the original number for final output
    while(num != 0) {
        int digit = num % 10;
        prod *= digit;
        sum += digit;
        num /= 10;
    }

    int ans = prod - sum;
    cout << "The difference between the product and sum of digits of is: " << ans << endl;

    return 0;
}
