#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Edge case for 0
    if (n == 0) {
        cout << "1" << endl;
        return 0;
    }

    int m = n;  // Copy of the original number
    int mask = 0;

    // Create a mask with all bits set to 1 up to the highest bit set in n
    while (m != 0) {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    // Calculate the complement of n within the mask
    int ans = (~n) & mask;
    cout << "Complement of " << n << " is: " << ans << endl;

    return 0;
}
