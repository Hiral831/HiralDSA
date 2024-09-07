#include<bits/stdc++.h>
using namespace std;

int totalSetbits(int n); 

int main() {
    int n1, n2;
    cout << "Enter n1 and n2: ";
    cin >> n1 >> n2;

    int ans = totalSetbits(n1) + totalSetbits(n2);
    cout << "Total set bits: " << ans << endl;

    return 0;
}

int totalSetbits(int n) {
    int ans = 0;
    while (n) {
        ans += n & 1;
        n >>= 1;  // Correct the right-shift operation
    }
    return ans;  // Add the missing semicolon
}
